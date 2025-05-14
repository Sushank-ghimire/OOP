/*
📌 Common Functions in <ctime>:
Function	    Description
time()      	Gets the current system time as a time_t object
ctime()       Converts time_t into a readable string
localtime()	  Converts time_t to local tm structure
gmtime()    	Converts time_t to UTC tm structure
difftime()  	Calculates difference (in seconds) between two times
strftime()  	Formats tm structure into a custom string

*/

#include <iostream>
#include <ctime>
#include <iomanip> // for put_time (C++11+)

using namespace std;

int main() {
    // 1. Get current time as timestamp (seconds since Jan 1, 1970)
    time_t now = time(0);

    cout << "=== TIME AND DATE IN C++ (<ctime>) ===\n\n";

    // 2. Print raw timestamp
    cout << "Raw Timestamp (time_t): " << now << " seconds since Jan 1, 1970\n";

    // 3. Convert timestamp to readable format (built-in format)
    cout << "Readable format using ctime(): " << ctime(&now); // adds \n automatically

    // 4. Convert to local time as a tm structure
    tm *local = localtime(&now);

    cout << "\nLocal time using tm structure:\n";
    cout << "Year  : " << 1900 + local->tm_year << endl;
    cout << "Month : " << 1 + local->tm_mon << endl;
    cout << "Day   : " << local->tm_mday << endl;
    cout << "Hour  : " << local->tm_hour << endl;
    cout << "Min   : " << local->tm_min << endl;
    cout << "Sec   : " << local->tm_sec << endl;

    // 5. Format custom string using strftime
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%A, %d %B %Y - %H:%M:%S", local);
    cout << "\nFormatted date/time using strftime: " << buffer << endl;

    // 6. Using gmtime() for UTC time
    tm *utc = gmtime(&now);
    cout << "\nUTC time using gmtime():\n";
    cout << "UTC Year : " << 1900 + utc->tm_year << endl;
    cout << "UTC Hour : " << utc->tm_hour << endl;

    // 7. Time difference using difftime()
    time_t past = now - 3600; // 1 hour ago
    double secondsDiff = difftime(now, past);
    cout << "\nDifference between now and 1 hour ago: " << secondsDiff << " seconds\n";


    return 0;
}

