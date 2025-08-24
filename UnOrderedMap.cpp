#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
   cout<<endl;
    cout<<m.size()<<endl;
    for(auto &it : m){ 
  cout<<(it.first)<<" "<<(it.second)<<endl;
  }  
}
int main() {
    //1. inbuilt implenetation.
    //2. Time complexcity.
    //3. valid keys datatype.
  unordered_map<int , string> m;
  m[1] = "abc";  //O(1)
  m[5] = "cdc";
  m[3] = "acd";
  m.insert({4,"afg"});
  // map<int,string> :: iterator it;
  // for(it = m.begin(); it!= m.end(); ++it){}
  print(m);
  auto it = m.find(3);
  if(it == m.end()){
    cout<<"NO VALUE";
  }else{
    cout<<it->first<<" "<<it->second;
  }
  cout<<endl;

  auto ite = m.find(7);
  if(ite == m.end()){
    cout<<"NO VALUE";
  }else{
    cout<<ite->first<<" "<<ite->second;
  }
if(it!=m.end()){

  m.erase(it);
}
print(m);
m.clear();
print(m);
    return 0;
}