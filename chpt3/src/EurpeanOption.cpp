// EurpeanOption.cpp


#include "EurpeanOption.h"
#include <math.h>
#include <iostream>

using namespace std;

double EurpeanOption::PutPrice() const
{
    double tmp = sig * sqrt(T);
    double d1 = (log(U/K) + (b+ (sig*sig)*0.5 ) * T)/ tmp;
    double d2 = d1 - tmp;
    return (K * exp(-r * T)* N(-d2)) - (U * exp((b-r)*T) * N(-d1));
}

double EurpeanOption::CallPrice() const
{
    double tmp = sig * sqrt(T); 
    double d1 = ( log(U/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp; 
    double d2 = d1 - tmp;
    return (U * exp((b-r)*T) * N(d1)) - (K * exp(-r * T)* N(d2));
}

double EurpeanOption::CallDelta() const 
{
    double tmp = sig * sqrt(T); 
    double d1 = ( log(U/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp; 
    return exp((b-r)*T) * N(d1);
}

double EurpeanOption::PutDelta() const 
{
    double tmp = sig * sqrt(T);
    double d1 = ( log(U/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp; 
    return exp((b-r)*T) * (N(d1) - 1.0);
}

void EurpeanOption::init()
{
    // initialize default values
    r = 0.08;
    sig = 0.30;
    K = 65.0; 
    T = 0.25;
    U = 60.0;
    b = r;
    optType = "C";
}

void EurpeanOption::copy(const EurpeanOption& o2)
{
    r = o2.r;
    sig = o2.sig; 
    K = o2.K; 
    T = o2.T; 
    U = o2.U; 
    b = o2.b;
    optType = o2.optType;
}

// Constructor
EurpeanOption::EurpeanOption()
{
    // default constructor
    init();
}

EurpeanOption::EurpeanOption(const EurpeanOption& o2)
{
    // copy constructor
    copy(o2);
}

EurpeanOption::EurpeanOption (const string& optionType)
{
    // create option type - rewrite default type
    init();
    optType = optionType;
}

// Destrcutor
EurpeanOption::~EurpeanOption()
{
    // destrcutor
}

double EurpeanOption::Price() const
{
    if (optType == "C")
    {
        return CallPrice();
    }
    else
    {
        return PutPrice();
    }
}

double EurpeanOption::Delta() const 
{
    if (optType == "C") 
        return CallDelta();
    else 
        return PutDelta();
}

void EurpeanOption::toggle()
{
    if (optType == "C")
    {
        optType = "P";
    }
    else
    {
        optType = "C";
    }
}


EurpeanOption& EurpeanOption::operator = (const EurpeanOption& opt2) 
{ 
    // Assignment operator (deep copy)
    if (this == &opt2) 
        return *this; 
    copy (opt2); 
    return *this;
}

double N(const double& x)
{
    return (1 + erf(x/sqrt(2))) / 2;
}

