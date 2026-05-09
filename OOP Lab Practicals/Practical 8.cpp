/*A school system needs a way to store and update student marks. A Student class is created with member variables to store the student’s name and marks. 
While setting the data, the developer faces a naming conflict between class data members and function parameters. This conflict is resolved using the this pointer.
Requirements:

Create a class Student with:
string name
int marks

Define a member function:
Use the this pointer to assign values to class data members.
Create a function:
void display()
to display the student details.*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Function to set data using this pointer
    void setData(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Student Name : " << name << endl;
        cout << "Marks        : " << marks << endl;
    }
};

int main() {
    Student s1;

    // Setting data
    s1.setData("Vedant", 89);

    // Displaying data
    s1.display();

    return 0;
}
