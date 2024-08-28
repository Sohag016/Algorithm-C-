#include <iostream>  // Use iostream instead of bits/stdc++.h for faster compilation
using namespace std;

int main() {
    int q, r, num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Check for division by zero
    if (num1 == 0 || num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;  // Return an error code
    }

    if (num1 > num2) {
        q = num1 / num2;
        r = num1 % num2;
    } else {
        q = num2 / num1;
        r = num2 % num1;
    }

    cout << "Quotient: " << q << endl;
    cout << "Remainder: " << r << endl;

    return 0;
}
