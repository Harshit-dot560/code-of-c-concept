#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setId()
    {
        salary = 122;
        cout << "Enter id of employee " << endl;
        cin >> id;
    }
    void getId()
    {
        cout << "The id of these employee is " << id << endl;
    }
};
int main()
{
    /* employee harsh,rohit,sahil,dulu;
      harsh.setId();
      harsh.getId();*/

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}
