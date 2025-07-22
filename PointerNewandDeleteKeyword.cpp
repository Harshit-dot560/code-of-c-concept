#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "The value of a is " << *(ptr) << endl;
    // new Operator
    int *p = new int(40);
    cout << "The value of at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 30;
    arr[2] = 46;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // Delete operator
    int *pvr = new int[3];
    pvr[0] = 10;
    pvr[1] = 30;
    pvr[2] = 46;
    delete[] pvr;
    cout << "The value of pvr[0] is " << pvr[0] << endl;
    cout << "The value of pvr[1] is " << pvr[1] << endl;
    cout << "The value of pvr[2] is " << pvr[2] << endl;

    return 0;
}