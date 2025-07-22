#include <iostream>
using namespace std;
int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    int a;
    int i;
    cout << "enter" << endl;
    cin >> a;
    cout << "The fibonacci series up to " << a << "th term is" << endl;
    for (i = 0; i <= a; i++)
    {
        cout << fib(i) << ",";
    }

    return 0;
}
