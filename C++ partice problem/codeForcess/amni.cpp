#include <bits/stdc++.h>
using namespace std;

void right() {
    int t;
    cin >> t;

    while (t--) {
        int h, m;
        char colon;
        cin >> h >> colon >> m;

        int hour12 = (h + 11) % 12 + 1; 
        string period = (h * 60 + m >= 720) ? "PM" : "AM"; 

       
        printf("%02d:%02d %s\n", hour12, m, period.c_str());
    }
}

int main() {
    right();
    return 0;
}
