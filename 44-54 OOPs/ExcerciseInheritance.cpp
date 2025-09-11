/*
create 2 classes
1. Simplecalculator - Takes 2 input using utility function and perforn +,-,*,/ and display result using another function.
2. Scientificcalculator - Take 2 input using utility function and perform any 4 scientific operation of your choice and display result using another function.

create another class hybrid calculator and inherit it using these 2 classes:
How is code reusuability is implented?
*/
#include <iostream>
#include <cmath>
using namespace std;
class Simplecalculator
{
    double a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationSimple()
    {
        cout << "The value of a + b is " << a + b << endl;
        cout << "The value of a - b is " << a - b << endl;
        cout << "The value of a * b is " << a * b << endl;
        cout << "The value of a / b is " << a / b << endl;
    }
};
class Sciencetificcalculator
{
    double a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationScientific()
    {
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of sin(b) is " << sin(b) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of log(b) is " << log(b) << endl;
    }
};
class HybridCalculator : public Sciencetificcalculator, public Simplecalculator
{
};
int main()
{
HybridCalculator simp;
simp.getDataScientific();
simp.performOperationScientific();
    return 0;
}