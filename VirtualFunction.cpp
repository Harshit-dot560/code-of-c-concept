#include<iostream>
using namespace std;
class Baseclass
{
public:
    int var_Base=1;
  virtual  void display()
    {
        cout << "Displaying Base class variable var_Base " << var_Base << endl;
    }
};
class Derivedclass : public Baseclass
{
public:
    int var_Derived=2;
    void display()
    {
        cout << "Displaying Derived class variable var_Derived " << var_Derived << endl;
    }
};
int main() {
    Baseclass *Base_class_pointer;
Baseclass obj_Baseclass;
Derivedclass obj_derived;
Base_class_pointer = &obj_derived;
Base_class_pointer->display();
    return 0;
}