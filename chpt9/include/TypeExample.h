//TypeExample.h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Base 
{
    public:
        Base() {}; 
        virtual ~Base() {};
        virtual void print() const { cout << "I am base \n"; }; 
        virtual double calculate(double d) const = 0;
};

class D1: public Base 
{
    public: 
        D1():Base() {} ;
        virtual ~D1() {};
        virtual void print() const { cout << "I'm a D1 \n"; } ;
        virtual double calculate(double d) const { return 1.0 * d; };
};

class D2: public Base 
{
    public:
        D2():Base() {};
        virtual ~D2() {};
        virtual void print() const { cout << "I'm a D2 \n"; };
        virtual double calculate(double d) const { return 2.0 * d; };
};