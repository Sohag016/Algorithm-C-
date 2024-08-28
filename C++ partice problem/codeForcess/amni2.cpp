#include <bits/stdc++.h>
using namespace std;

void right() {
    int t;
    cin >> t;

    while (t--) {
        int h, m;
        char colon; // To read the ':' character
        cin >> h >> colon >> m;

        // Convert to 12-hour format
        int hour12 = (h + 11) % 12 + 1;
        // Determine AM/PM
        string period = (h * 60 + m >= 720) ? "PM" : "AM";

        // Print formatted time using cout and iomanip for padding
        cout << setw(2) << setfill('0') << hour12 << ":"
             << setw(2) << setfill('0') << m << " "
             << period << endl;
    }
}

int main() {
    right();
    return 0;
}
