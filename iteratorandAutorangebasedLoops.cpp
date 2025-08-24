/*  #include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); ++it)
    {
        //   cout<<(*it).first<<" "<<(*it).second<<endl;
        cout << (it->first) << " " << (it->second) << endl;
    }
    return 0;
}
    */

     // Range based loops
   #include<bits/stdc++.h>
   using namespace std;
   
   int main() {
    vector<int> v = {2,3,4,5,6,7};
   /*
    for(int range : v){  // it is a copy not reference
    range++;
      cout<< range<<" ";  
    }

    */
    for(int &range : v){  // it is a  reference
    range++;
      
    }
     for(int range : v){  // it is a copy not reference
    
      cout<< range<<" ";  
    }
    cout<< endl;
  

   //Auto keyword already assume data type
   auto  a = 1.343;
   cout<< a <<endl;
   vector<pair<int,int> > v_p = {{1,2}, {2,4}};
   for(auto &value : v_p){
    cout<<value.first<<" "<<value.second<<endl;
   }

   return 0;
  }
