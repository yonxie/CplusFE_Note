// TestComplex.cpp


#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    // Test complex object

    cout << "### Test Complex object ###" << endl;
    Complex p1(1.0, 2.0);
    Complex p2(p1);

    cout << "P1: (" << p1.X() << "," << p1.Y() << ")." << endl;
    cout << "P2: (" << p2.X() << "," << p2.Y() << ")." << endl;

    // Test opertor overloading
    cout << "### Test operator overloading ###" << endl;

    Complex p3 = p1 + p2;
    Complex p4 = p1.add(p2);

    cout << "P3: (" << p3.X() << "," << p3.Y() << ")." << endl;
    cout << "P4: (" << p4.X() << "," << p4.Y() << ")." << endl;

    Complex p5 = p1.multiply(3);
    Complex p6 = p1 * 3;
    Complex p7 = 3 * p1;

    cout << "P5: (" << p5.X() << "," << p5.Y() << ")." << endl;
    cout << "P6: (" << p6.X() << "," << p6.Y() << ")." << endl;
    cout << "P7: (" << p7.X() << "," << p7.Y() << ")." << endl;

    cout << "<< operator for P5: " << p5 << endl;


return 0;
}