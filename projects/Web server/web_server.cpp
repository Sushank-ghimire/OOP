#include <iostream>
#include <thread>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

#define PORT 8080
#define BUFFER_SIZE 4096

void handle_client(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};
    int valread = recv(client_socket, buffer, BUFFER_SIZE, 0);
    if (valread > 0) {
        std::cout << "Received:\n" << buffer << std::endl;

        const char* response =
            "HTTP/1.1 200 OK\r\n"
            "Content-Type: text/html\r\n"
            "Connection: close\r\n"
            "\r\n"
            "<h1>Hello from Windows Web Server</h1>";
        send(client_socket, response, strlen(response), 0);
    }
    closesocket(client_socket);
}

int main() {
    WSADATA wsaData;
    SOCKET server_fd, client_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    if (WSAStartup(MAKEWORD(2,2), &wsaData) != 0) {
        std::cerr << "WSAStartup failed.\n";
        return 1;
    }

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == INVALID_SOCKET) {
        std::cerr << "Socket creation failed.\n";
        WSACleanup();
        return 1;
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (sockaddr*)&address, sizeof(address)) == SOCKET_ERROR) {
        std::cerr << "Bind failed.\n";
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    if (listen(server_fd, SOMAXCONN) == SOCKET_ERROR) {
        std::cerr << "Listen failed.\n";
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    std::cout << "Server listening on port " << PORT << "...\n";

    while (true) {
        client_socket = accept(server_fd, (sockaddr*)&address, &addrlen);
        if (client_socket == INVALID_SOCKET) {
            std::cerr << "Accept failed.\n";
            continue;
        }

        std::thread client_thread(handle_client, client_socket);
        client_thread.detach();
    }

    closesocket(server_fd);
    WSACleanup();
    return 0;
}
