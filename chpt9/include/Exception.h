// Exception.h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef Exception_H
#define Exception_H

class MethErr
{// Base class for exceptions

    private:

        string mess;    // message;
        string meth;    // method that throws error

    public:

        MethErr(){mess = meth = string();}
        MethErr(const string& message, const string& method)
        {
            mess = message;
            meth = method;
        }
        virtual ~MethErr() {};
        string Method() const {return meth;}
        string Message() const {return mess;}

        virtual vector<string> MessageDump() const = 0;
        virtual void print() const
        {
            vector<string> r = MessageDump();
            for (unsigned int i=0; i<r.size(); i++)
            {
                cout << r[i] << endl;
            }
        }
};

class ZeroDivide: public MethErr
{
    private:

        string mess;

    public:

        ZeroDivide(): MethErr() {mess = string();}

        ZeroDivide(const string& message,const string& method, 
        const string& annotation): MethErr(message, method)
        {
            mess = annotation;
        }
        virtual ~ZeroDivide() {};

        vector<string> MessageDump() const
        {
            vector<string> result(3);
            result[0] = Message(); 
            result[1] = Method(); 
            result[2] = mess;
            return result;
        }
};


#endif