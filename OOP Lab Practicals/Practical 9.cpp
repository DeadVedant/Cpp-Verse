/*Title: Grocery Bill Calculator Using Class Templates

Problem Statement: Create a class template GroceryCalculator
with a generic type T.

The class should have private members to store the item name,
quantity, and price per unit of type T.
. Input grocery details (item name, quantity, price per
unit).
. Calculate the total cost for each item.
. Display the grocery bill with item details and total cost.
Write a program to demonstrate the use of the GroceryCalculator
class with integers (for quantity) and floats (for price).*/

#include <iostream>
using namespace std;

// Class Template
template <class T>
class GroceryCalculator {
private:
    string itemName;
    T quantity;
    T pricePerUnit;
    T totalCost;

public:
    // Function to input grocery details
    void getData() {
        cout << "Enter Item Name: ";
        cin >> itemName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price Per Unit: ";
        cin >> pricePerUnit;

        totalCost = quantity * pricePerUnit;
    }

    // Function to display grocery bill
    void displayBill() {
        cout << "\n--- Grocery Bill ---" << endl;
        cout << "Item Name      : " << itemName << endl;
        cout << "Quantity       : " << quantity << endl;
        cout << "Price Per Unit : " << pricePerUnit << endl;
        cout << "Total Cost     : " << totalCost << endl;
    }
};

int main() {

    // Object using float type
    GroceryCalculator<float> g1;

    // Input and display
    g1.getData();
    g1.displayBill();

    return 0;
}
