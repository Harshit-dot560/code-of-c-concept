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
};
int Employee ::count = 1000; // Default value is 0. if not given
int main()
{
    Employee harsh, sahil, rohit;
    harsh.setData();
    harsh.getData();

    sahil.setData();
    sahil.getData();

    rohit.setData();
    rohit.getData();
    return 0;
}