/*  OOps - Classes and objects
 structure limitations
   -->members and public
 --> no methods
 classes--> structers+more
   -->can have methods and properties
 --> can make public and private and few as public
 u can declare object along with the class declaration*/
/*
example int main()
 class employee{
 class definition
          }harsh,hduehd,dhe;*/

/* nesting of member*/

#include <iostream>
#include <string>
using namespace std;
class binary
{
  private:
  string s;
  void chk_bin();

public:
  void read();
 //void chk_bin(); if we want user to use chk_bin
  void ones();
  void display();
};
void binary ::read()
{
  
  cout << "Enter a binary no" << endl;
  cin >> s;
}
void binary ::chk_bin()
{
  for (int i = 0; i < s.length(); i++)
  {

    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "incorrect binary program" << endl;
      exit(0);
    }
  }
}
void binary::ones()
{
   chk_bin();
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}
void binary ::display()
{
  cout << "Displaying your no :" << endl;
  for (int i = 0; i < s.length(); i++)
  {
    cout << s.at(i);
  }
  cout << endl;
}

int main()
{
  binary b;
  b.read();
 // b.chk_bin();
  b.ones();
  b.display();
  return 0;
}