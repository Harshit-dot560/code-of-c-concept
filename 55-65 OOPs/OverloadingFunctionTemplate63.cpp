#include <iostream>
using namespace std;
template <class T>
class harsh
{
public:
    T data;
    harsh(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void harsh<T>::display()
{

    cout << data;
}

void func(int a){
    cout<<" I am first func() "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<" I am templatised func() "<<a<<endl;
}

int main()
{
   /* harsh<int> h(6);
    cout << h.data << endl;
    h.display();
    */

    func(8.9);
 // exact match will call first
    return 0;
}
