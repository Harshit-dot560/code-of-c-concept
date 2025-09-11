#include <iostream>
using namespace std;
/*
float funcaverage(int a, int b){
    float avg = (a+b)/2;
    return avg;
}
*/
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcaverage2(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    /* float a;
      a = funcaverage(5,2.4);
      cout<<a<<endl;
      float a;
      */
    float a;
    a = funcaverage2(5, 2.4);
    cout << a << endl;

    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl
         << y;
    return 0;
}