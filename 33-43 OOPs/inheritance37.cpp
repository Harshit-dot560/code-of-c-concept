#include <iostream>
using namespace std;
// Base class
class employee
{

public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee() {}
};
// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
code....
}
Note :
1.Default visibility mode is private.
2.private visibility mode : Public member of base class become private member of derived class.
3.public visibility mode : Public member of base class become public member of derived class.
4. private member of base class never inherited.
*/
// creating derived class
class programmer : public employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee harsh(1);
    cout << harsh.salary << endl;
    programmer skillf(1);
    cout << skillf.languagecode << endl;
    skillf.getdata();
    return 0;
}