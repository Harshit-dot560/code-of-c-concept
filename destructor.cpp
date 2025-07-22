#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is class for the object number " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main" << endl;
    cout << " Creating first object n1 " << endl;
    num n1;
    {
        cout << "Entering in block" << endl;
        cout << "Creating two more object" << endl;
        num n2, n3;
        cout << "Existing the block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}