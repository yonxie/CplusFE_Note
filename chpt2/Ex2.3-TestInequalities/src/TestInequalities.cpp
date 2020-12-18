// TestInequalities.cpp
//
// Main program to test Max and Min functions

#include <iostream>
using namespace std;

#include "inequalities.h"

int main(){
    // Prompt the user for input. Console output and input

    double num1, num2;
    cout << "Give the first number: ";
    cin >> num1;
    cout << "Give the second number: ";
    cin >> num2;

    string type; 
    cout << "which function to test a) Max() or b) Min()?";
    cin >> type;

    if (type == "a"){
        cout << "Max value is: " << Max(num1, num2) << endl;
    }
    else{
        cout << "Min value is: " << Min(num1, num2) << endl;
    }

    double num3 = 1.0; double num4 = 2.0; double num5 = 3.0;
    cout << "\n \n Max and Min of three numbers: " << endl;

    cout << "Max value is: " << Max(num3, num4, num5) << endl;
    cout << "Min value is: " << Min(num3, num4, num5) << endl;

    return 0;
}

