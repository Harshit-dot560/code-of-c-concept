#include<bits/stdc++.h>
using namespace std;
//stack = LIFO
//Queues = FIFO
int main() {
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(6);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    queue<string> q;
    q.push("abc");
    q.push("tgf");
    q.push("fvv");
    q.push("sdf");
    q.push("sfs");
    while (!q.empty()){
cout<< q.front()<<endl;
q.pop();
    }
   
    return 0;
}