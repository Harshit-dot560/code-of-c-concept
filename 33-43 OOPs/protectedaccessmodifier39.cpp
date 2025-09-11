/*
for a member and visibility
                      public derivation      private derivation       protected derivation
1.private member           not inherit          not inherit              not inherit
2.protected member          protected            private                 protected 
3.public member              public              private                 protected   

*/
#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
class derived : protected base 
{
};
int main()
{

    return 0;
}