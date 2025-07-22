#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Your price is " << price << endl;
    }
};
int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout << " Item number: " << j + 1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }

    return 0;
}