#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void print_Data1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void print_Data2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, virtual public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived constructor called " << endl;
    }
    void printData()
    {
        cout << "The value of derived 1 is " << derived1 << endl;
        cout << "The value of derived 2 is " << derived2 << endl;
    }
};
int main()
{
    Derived harsh(1, 2, 3, 4);
    harsh.print_Data1();
    harsh.print_Data2();
    harsh.printData();
    return 0;
}