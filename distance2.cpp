#include <iostream>
#include <cmath>
using namespace std;
class Distance
{
    int x, y;

public:
    void coordinate(int a, int b)
    {
        x = a;
        y = b;
        
    }
    friend double points(Distance o1, Distance o2);
};

  double points(Distance o1, Distance o2)
{
    return sqrt(pow(o2.x - o1.x , 2) + pow(o2.y - o1.y , 2));
}

int main()
{
    Distance c1,c2;
    c1.coordinate(2, 3);
    c2.coordinate(5, 4);
    double sum =  points(c1, c2);
    cout << " The distance between two points will be " << sum << endl;

    return 0;
}