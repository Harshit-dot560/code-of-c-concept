#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); // constructor declaration
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void)
{
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.printnumber();

    return 0;
}
/*
constructor is a special member function with the same name as of class.
It is uesd to initialise the objects of its class.
It is automaticallly invoked whenever an object is created.

charactersics of constructor
It should be declared in the public section of the class
They cannot return value and do not have return types
It can have default arguments
we cannot refer to their address

*/