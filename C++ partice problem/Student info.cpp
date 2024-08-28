#include<iostream>
#include<string> // The correct header for the string class is <string>, not <String>
using namespace std;

void display(string name[], string address[], int Id[], int size) { // Corrected the function signature

    for(int i = 0; i < size; i++) {
        cout << "Student number " << i + 1 << " information" << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Address: " << address[i] << endl;
        cout << "ID: " << Id[i] << endl;
        cout << endl << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore(); // To clear the input buffer
    string name[n];
    string address[n];
    int Id[n];
    cout << "Please provide student information:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Student number " << i + 1 << " Information" << endl;
        cout << "Enter name: ";
        getline(cin, name[i]);
        cout << "Enter address: ";
        getline(cin, address[i]);
        cout << "Enter ID: ";
        cin >> Id[i];
        cin.ignore(); // To clear the input buffer
    }
    display(name, address, Id, n);
    return 0;
}
