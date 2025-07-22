#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of employee is " << id << "  and this is employee no." << count << endl;
        ;
    }
    static void getCount()
    {
        // cout<<id; throw an error
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count; // Default value is 0. if not given
int main()
{
    Employee harsh, sahil, rohit;
    harsh.setData();
    harsh.getData();
    harsh.getCount(); // or Employee ::getCount();

    sahil.setData();
    sahil.getData();
    Employee::getCount();

    rohit.setData();
    rohit.getData();
    Employee::getCount();
    return 0;
}