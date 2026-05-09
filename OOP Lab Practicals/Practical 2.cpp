/*Statement: Write a C++ program to read 5 subject marks from students and find out 
passing class of Him/her like- 
 . Avg>70 then Distinction 
i. Avg>60 and <70 then First Class 
ii. Avg>50 and <60 then Second Class 
iii. Avg>40 and <50 then Pass Class 
Otherwise FAIL*/

#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5, avg;

    // Input marks
    cout << "Enter marks of 5 subjects:\n";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    // Calculate average
    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    cout << "Average Marks = " << avg << endl;

    // Determine class
    if(avg > 70) {
        cout << "Result: Distinction";
    }
    else if(avg > 60 && avg <= 70) {
        cout << "Result: First Class";
    }
    else if(avg > 50 && avg <= 60) {
        cout << "Result: Second Class";
    }
    else if(avg > 40 && avg <= 50) {
        cout << "Result: Pass Class";
    }
    else {
        cout << "Result: FAIL";
    }

    return 0;
}
