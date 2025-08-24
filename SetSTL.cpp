/*

#include<bits/stdc++.h>
using namespace std;
void print(set<int> &s){
   for(int value : s){
    cout<< value << endl;
   } 
}
int main() {
    set<int> s;
    s.insert(3);  //log(n)
    s.insert(1);
    s.insert(2);
    auto it = s.find(9);
  if(it!= s.end()){
    cout<< (*it);
  }
    print(s);
    return 0;
}
    */
// can't do unordered_set<pair<int,int> > s;
// can't do unordered_set<set<int,int> > s;
// same in unordered_map

//unordered_set 

    #include<bits/stdc++.h>
    using namespace std;
    void print(unordered_set<int> &s){
   for(int value : s){
    cout<< value << endl;
   } 
}
    int main() {
     unordered_set<int> s;
    s.insert(3);  // O(1)
    s.insert(1);
    s.insert(2);
   
  
    print(s);
    return 0; 
      return 0;
    }