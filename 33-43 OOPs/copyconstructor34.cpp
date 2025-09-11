#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number() {}
    Number(int num)
    {
        a = num;
    }
    // when there is no copy constructor then compiler called default copy constructor
    Number(Number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for these object is " << a << endl;
    }
};
int main()
{
    Number x(2), y(3), z(45), z2;
    x.display();
    y.display();
    z.display();
    Number z1(y); // copy constructor invoked
    z1.display();
    z2 = z;        // copy not called
    Number z3 = z; // copy constructor called
    return 0;
}