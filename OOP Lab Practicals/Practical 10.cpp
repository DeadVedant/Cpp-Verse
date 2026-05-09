/*Create a program that simulates an ATM withdrawal process. 
Accept the user's account balance and withdrawal amount. 
Throw an exception if the withdrawal amount exceeds the 
account balance. Handle the exception gracefully by displaying 
an appropriate error message.*/

#include <iostream>
using namespace std;

int main() {
    float balance, withdrawAmount;

    // Input account details
    cout << "Enter Account Balance: ";
    cin >> balance;

    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawAmount;

    try {
        // Check for insufficient balance
        if(withdrawAmount > balance) {
            throw withdrawAmount;
        }

        // Successful withdrawal
        balance = balance - withdrawAmount;

        cout << "\nWithdrawal Successful!" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }

    // Exception handling
    catch(float amount) {
        cout << "\nError: Insufficient Balance!" << endl;
        cout << "You cannot withdraw " << amount << " from your account." << endl;
    }

    return 0;
}
