#include <iostream>
using namespace std;
/*
syntax fir intialisation list in constructor:
constructor (argument-list) : intialisation-section
{
assigment+other code;
}
Example--
class Test{
int a;
int b;
 public :
   Test(int i, int j) : a(i) b(j){
   }
};
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i) , b(j)
    //  Test(int i, int j) : a(i) , b(i+j)
    //   Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j) , a(i + j)  --> Red flag these will create problem becoz a is intialise first cux in private a first intialise.
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(4, 6);
    return 0;
}