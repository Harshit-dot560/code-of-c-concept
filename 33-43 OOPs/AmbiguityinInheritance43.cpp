#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};
class b
{
public:
    void say()
    {
        cout << "Hello " << endl;
    }
};
class d : public b
{
public:
 // d new say will overwrite with b say .
    void say()
    {
        cout << "changed hii" << endl;
    }
};

int main()
{
   //Ambiguity1
    /*
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();
    */
   // Ambiguity2
    b c;
    c.say();
    d n;
    n.say(); 
    return 0;
}