#include <cstring>
#include <iostream>
using namespace std;
class CWH
{
protected:
  string title;
  float rating;

public:
  CWH(string s, float r)
  {
    title = s;
    rating = r;
  }
  virtual void display() {} = 0; //do nothing function  -->pure virtual function
};
class CWHVideo : public CWH
{
  float videolength;

public:
  CWHVideo(string s, float r, float vl) : CWH(s, r)
  {
    videolength = vl;
  }
  void display()
  {
    cout << "This  is an amazing video with title  " << title << endl;
    cout << "Ratings: " << rating << " out of 5 stars" << endl;
    cout << "Length of this video is: " << videolength << " minutes" << endl;
  }
};
class CWHText : public CWH
{
  int words;

public:
  CWHText(string s, float r, int wc) : CWH(s, r)
  {
    words = wc;
  }
  void display()
  {
    cout << "This  is an amazing texts tutorial with title  " << title << endl;
    cout << "Ratings: " << rating << " out of 5 stars" << endl;
    cout << "No of words in this text tutorial is: " << words << " words" << endl;
  }
};
int main()
{
  string title;
  float rating, vlen;
  int words;

  title = "Django tutorial";
  vlen = 4.56;
  rating = 4.89;
  CWHVideo djvideo(title, rating, vlen);
  

  title = "Django tutorial text";
  words = 456;
  rating = 4.19;
  CWHText djtext(title, rating, words);

  CWH *tuts[2];
  tuts[0] = &djvideo;
  tuts[1] = &djtext;

  tuts[0]->display();
  tuts[1]->display();
  return 0;
}

