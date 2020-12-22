// Complex.cpp

#include "Complex.h"
#include <iostream>

using namespace std;


// define body

// constructor
void Complex::init(double xs, double ys)    // cannot use the same arguement as data name
{
    x = xs;
    y = ys;

}
Complex::Complex()
{
    init(0.0, 0.0);
}

Complex::Complex(double x, double y)
{
    init(x, y);
}

Complex::Complex(const Complex& source)
{
    init(source.x, source.y);
}

// destructor
Complex::~Complex()
{
    cout << "destructing the object." << endl;
}

// access to data

double Complex::X() const
{
    return x;
}

double Complex::Y() const
{
    return y;
}


// Operations

Complex Complex::add(const Complex& point) const   // no ; when define function
{
    return Complex(x+point.x, y+point.y);
}

Complex Complex::operator + (const Complex& point) const
{
    return Complex(x+point.x, y+point.y);
}

Complex Complex::multiply(double c) const
{
    return Complex(x * c, y * c);
}

Complex operator * (const Complex& point, double c)     // no friend here
{
    return Complex(point.x * c, point.y * c);
}

Complex operator * (double c, const Complex& point)
{
    return Complex(point.x * c, point.y * c);
}

ostream& operator << (ostream& os, const Complex& cmp)
{
    os << "(" << cmp.X() << ", " << cmp.Y() << ")\n";        // not include endl, so we add it when we call.
    return os;
}

