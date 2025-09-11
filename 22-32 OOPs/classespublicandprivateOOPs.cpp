#include<iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
  void setData(int a1, int b1, int c1);//Decaralartion
void getData(){
  cout<<"The value of a is "<<a<<endl;
  cout<<"The value of b is "<<b<<endl;
  cout<<"The value of c is "<<c<<endl;
  cout<<"The value of d is "<<d<<endl;
  cout<<"The value of e is "<<e<<endl;
}
};
void employee:: setData(int a1, int b1, intc1,){
  a=a1;
  b=b1;
  c=c1;

}
int main() {
    employee harsh;
   // harsh.a=77 this is a error cuz a is aprivate file
    harsh.d=9;
    harsh.e=8;
    harsh.setData(4,3,2);
    harsh.getData();
    return 0;
}

