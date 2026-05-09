/*Statement: Design and implement a calculator in C++ that performs basic 
arithmetic operations. The calculator should support operations such as 
addition, subtraction, multiplication, division, and modulus. The 
program should accept user input, perform the selected operation, and 
display the result. */

#include <iostream>
using namespace std;

int main() {
    char op;
    int num1, num2;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Performing operation using switch case
    switch(op) {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;

        case '%':
            if(num2 != 0)
                cout << "Result = " << num1 % num2;
            else
                cout << "Error! Modulus by zero is not allowed.";
            break;

        default:
            cout << "Invalid Operator!";
    }

    return 0;
}
