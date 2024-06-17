#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operation based on operator entered
    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Error! Division by zero is not allowed." << endl;
    } else {
        cout << "Error! Invalid operator." << endl;
    }

    return 0;
}
