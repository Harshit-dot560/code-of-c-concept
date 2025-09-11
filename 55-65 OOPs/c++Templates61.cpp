#include <iostream>
using namespace std;
template<class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }

};
int main()
{
    
    Vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    Vector<int> v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 4;
    v2.arr[2] = 1;

    int a = v1.dotproduct(v2);
    cout << a << endl;
         /* 
        Vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    Vector<float> v2(3);
    
    v2.arr[0] = 2.2;
    v2.arr[1] = 4.2;
    v2.arr[2] = 1.9;

    float a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
    */
}