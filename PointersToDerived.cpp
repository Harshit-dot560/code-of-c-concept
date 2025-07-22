#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_Base;
    void display()
    {
        cout << "Displaying Base class variable var_Base " << var_Base << endl;
    }
};
class Derivedclass : public Baseclass
{
public:
    int var_Derived;
    void display()
    {
        cout << "Displaying Derived class variable var_Derived " << var_Derived << endl;
    }
};
int main()
{
Baseclass *Base_class_pointer;
Baseclass obj_Baseclass;
Derivedclass obj_derived;
Base_class_pointer = &obj_derived;
    Base_class_pointer->var_Base = 34;
    // Base_class_pointer->var_Derived =767;  will throw an error
    Base_class_pointer->display();

    Derivedclass *Derived_class_pointer;
    Derived_class_pointer = &obj_derived;
    Derived_class_pointer->var_Derived  = 98;
    Derived_class_pointer->display();
    return 0;
}