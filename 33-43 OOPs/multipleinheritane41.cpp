#include <iostream>
using namespace std;
// Multiple inheritance syntax
/*
class Derived:visibility-mode base1,visibility-mode base2
{
  class body
};
*/
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base 1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The sum is " << base1int + base2int << endl;
    }
};
int main()
{
    derived harsh;
    harsh.set_base1int(22);
    harsh.set_base2int(29);
    harsh.show();
    return 0;
}