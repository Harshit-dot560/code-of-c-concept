#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number()
{
    cout << "The roll no. is " << roll_number << endl;
}
class exam : public student
{
protected:
    double physics;
    double maths;

public:
    void set_marks(double, double);
    void get_marks(void);
};
void exam ::set_marks(double m1, double m2)
{
    maths = m1;
    physics = m2;
}
void exam::get_marks(void)
{
    cout << " The marks obtained in physics are " << physics << endl;
    cout << " The marks obtained in maths are " << maths << endl;
}
class result : public exam
{
    float percantage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percantage is " << (maths + physics) / 2 <<"%"<< endl;
    }
};
int main()
{
    result harsh;
    harsh.set_roll_number(420);
    harsh.set_marks(99.9, 100.0);
    harsh.display();
    return 0;
}