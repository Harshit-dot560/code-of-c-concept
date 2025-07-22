#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter() { counter = 0; }
    void setPrice();
    void displayPrice();
};

void shop ::setPrice()
{
    cout << "Enter id of ur item no " << counter << endl;
    cin >> itemid[counter];
    cout << "Enter Price of your item" << counter << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}