#include<iostream>

#include<map>
using namespace std;
// map is an associative array.
int main() {
map<string, int> marksMap;
marksMap["Harsh"] = 88;
marksMap["Gogoi"] = 99;
marksMap["roi"] = 77;
marksMap.insert({{"kozume", 199}, {"kuro", 122}});
map<string, int> :: iterator iter;
for(iter = marksMap.begin(); iter != marksMap.end(); iter++)  {
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
}

    return 0;
}