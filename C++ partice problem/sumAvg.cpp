#include<iostream>
using namespace std;

class A {
public:
    int n1, n2;

    void getInput() {
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }

    void avg() {
        int total = n1 + n2;
        int average = total / 2;
        cout << "Average: " << average << endl;
    }

    void even() {
        int total = n1 + n2;
        if (total % 2 == 0) {
            cout << "The sum is even." << endl;
        }
    }

    void odd() {
        int total = n1 + n2;
        if (total % 2 != 0) {
            cout << "The sum is odd." << endl;
        }
    }
};

int main() {
    A obj;
    obj.getInput();
    obj.avg();
    obj.even();
    obj.odd();
    return 0;
}
