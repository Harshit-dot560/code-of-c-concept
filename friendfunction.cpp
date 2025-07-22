#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2); // it is not a part of class it is only declaration, it is allowed to do anything with my data types
 
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 6);
    c2.printNumber();
    // sum.sumcomplex it is wrong cuz it is friend function
    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}
/* properties of friend fuction
1. not in the scope of class.
2. since it is not in the scope of class , it cannot be called from the object of that class  c1.sumcomplex== invalid
3. can be invoked without the help of any object
4. usually the contains the objects as arguments
5. can be declared in public and private part of class
6. it can not access the member directly by their names and need object_name.member_name to acces any member