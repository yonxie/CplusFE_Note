// TestGenericInequalities.cpp

#include <iostream>
using namespace std;

#include "GenericInequalities.cpp"          // include cpp file since it's templated!!

int main(){
    // Prompt the user for input. Console output and input

    double num1, num2;
    cout << "Give the first number (int): ";
    cin >> num1;
    cout << "Give the second number (int): ";
    cin >> num2;

    string type; 
    cout << "which function to test a) Max() or b) Min()?";
    cin >> type;

    if (type == "a"){
        cout << "Max value is: " << Max<int>(num1, num2) << endl;
    }
    else{
        cout << "Min value is: " << Min<int>(num1, num2) << endl;
    }

    double num3 = 1.0; double num4 = 2.0; double num5 = 3.0;
    cout << "\n \n Max and Min of three numbers: " << endl;

    cout << "Max value is: " << Max(num3, num4, num5) << endl;
    cout << "Min value is: " << Min(num3, num4, num5) << endl;

    return 0;
}