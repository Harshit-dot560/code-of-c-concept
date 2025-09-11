#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBysum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void printData()
    {
        cout << "Your complex no is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex o1, o2, o3;
    o1.setData(1, 2);
    o1.printData();

    o2.setData(2, 3);
    o2.printData();

    o3.setDataBysum(o1, o2);
    o3.printData();

    return 0;
}