

#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void print_number()
    {
        cout << "Your roll number is " << roll_number << endl;
    }    
    };
class Test : virtual public /* (public virtual) */ Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your Result is:  " << endl
             << " Maths:" << maths << endl
             << " physics:" << physics << endl;
    } 
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void Display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};
int main()
{
    Result harsh;
    harsh.set_number(22);
    harsh.set_marks(44, 55);
    harsh.set_score(3);
    harsh.Display();
    return 0;
}