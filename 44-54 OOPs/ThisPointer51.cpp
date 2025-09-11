#include <iostream>
using namespace std;
class A
{
    int a;

public:
   A &  setData(int a)
    {
        this->a = a;
        return *this;
    }

    void getData()
    {
        cout << "The valure of a is " << a << endl;
    }
};
int main()
// (this->) is a keyword which is a pointer which point to the object which invoked the member function.
{
    A a;
    a.setData(4).getData();
    a.getData();
    return 0;
}