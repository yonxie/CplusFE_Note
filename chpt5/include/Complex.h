// Complex.h

// Contains definition and operations for Complex number object

#include <iostream>

using namespace std;

#ifndef Complex_H
#define Complex_H

class Complex
{
    private:
        
        void init(double x, double y);
        double x;
        double y;
    
    public: 

        // Constructor
        Complex();          // no return type for constructor
        Complex(double x, double y);
        Complex(const Complex& source);

        // Destructor
        virtual ~Complex();

        // operations
        double X() const;    // function name cannot be the same with data
        double Y() const;


        // regular operation
        Complex add(const Complex& point) const;   // add and generate new number
        Complex multiply(double c) const;

        // operator overloading
        Complex operator + (const Complex& point) const;
        friend Complex operator * (const Complex& point, double c);
        friend Complex operator * (double c, const Complex& point);

        friend ostream& operator << (ostream& os, const Complex& cmp);
};


#endif
