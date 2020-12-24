//Print.h

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T>
void print(const vector<T>& l, string s=string("data"))
{
    cout << endl << s << ", size of vector is " << l.size() << "\n [";
    
    typename vector<T>::const_iterator i;     // must have typename specifier
    for (i=l.begin(); i!=l.end(); i++)
    {
        cout << *i << ",";
    }
    cout << "]\n";
}
