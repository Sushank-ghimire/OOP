#include <iostream>
#include <string>

using namespace std;

int main() {
    string matrix[3][3] = {
        {"0", "1", "2"},
        {"3", "4", "5"},
        {"6", "7", "8"},
    };

    string marked[9] = {"", "", "", "", "", "", "", "", ""};

    string turn = "X";
    bool isWinned = false;
    string winner = "";
    bool isTie = false;

    do {
        // Display board
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "\t" << matrix[i][j] << "\t";
            }
            cout << endl;
        }

        int choice;
        cout << "Enter your choice (0-8). Turn of: " << turn << " : ";
        cin >> choice;

        if (choice < 0 || choice > 8) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        if (marked[choice] != "") {
            cout << "Already marked. Try another.\n";
            continue;
        }

        // Update matrix and marked
        marked[choice] = turn;
        int row = choice / 3;
        int col = choice % 3;
        matrix[row][col] = turn;

        // Check for win conditions
        if (marked[0] != "" && marked[0] == marked[1] && marked[1] == marked[2]) {
            isWinned = true; winner = marked[0];
        } else if (marked[3] != "" && marked[3] == marked[4] && marked[4] == marked[5]) {
            isWinned = true; winner = marked[3];
        } else if (marked[6] != "" && marked[6] == marked[7] && marked[7] == marked[8]) {
            isWinned = true; winner = marked[6];
        } else if (marked[0] != "" && marked[0] == marked[3] && marked[3] == marked[6]) {
            isWinned = true; winner = marked[0];
        } else if (marked[1] != "" && marked[1] == marked[4] && marked[4] == marked[7]) {
            isWinned = true; winner = marked[1];
        } else if (marked[2] != "" && marked[2] == marked[5] && marked[5] == marked[8]) {
            isWinned = true; winner = marked[2];
        } else if (marked[0] != "" && marked[0] == marked[4] && marked[4] == marked[8]) {
            isWinned = true; winner = marked[0];
        } else if (marked[2] != "" && marked[2] == marked[4] && marked[4] == marked[6]) {
            isWinned = true; winner = marked[2];
        }

        // Check for tie
        bool allMarked = true;
        for (int i = 0; i < 9; i++) {
            if (marked[i] == "") {
                allMarked = false;
                break;
            }
        }
        if (!isWinned && allMarked) {
            isTie = true;
        }

        // Switch turn
        if (!isWinned && !isTie) {
            turn = (turn == "X") ? "O" : "X";
        }

    } while (!isWinned && !isTie);

    // Final board display
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "\t" << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Result
    if (isWinned) {
        cout << "The Winner is: " << winner << endl;
    } else if (isTie) {
        cout << "It's a Tie!" << endl;
    }
    return 0;
}
