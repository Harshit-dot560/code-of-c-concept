#include <iostream>
using namespace std;
// not working due to copies of a and b are use in main function
/*
void swap(int a, int b)
{                 // temp a b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
}
    */

// Call by reference using pointers
void swapPointer(int *a, int *b)
{                  // temp a b
    int temp = *a; // 4   4  5
    *a = *b;       // 4   5  5
    *b = temp;     // 4   5  4
}

// call by reference variable
void swapReferenceVar(int &a, int &b)
{                 // temp a b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
}
int main()
{
    /*
      int x = 4, y = 5;
      cout << "The value of x is " << x << " and the value of y is " << y << endl;
      swap(x, y);
      cout << "The value of x is " << x << " and the value of y is " << y << endl;
      return 0;
      */

    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapPointer(&x, &y); // This will swap a and b using pointer reference
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    int x = 8, y = 9;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapReferenceVar(x, y); // This will swap a and b using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}
