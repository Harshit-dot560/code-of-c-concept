// Default constructor
/*
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); // constructor declaration  this take no parameter
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
    */

// parameter constructor
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y); // constructor declaration
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // implict call
    complex c(8, 7);
    c.printnumber();
    complex x(4, 5);
    x.printnumber();
    return 0;
}