#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> lists1; // lists of zero length
    lists1.push_back(2);
    lists1.push_back(6);
    lists1.push_back(3);
    lists1.push_back(8);
    display(lists1);
    //  removing elements from lists

    // lists1.pop_back();
    // lists1.pop_front();
    // lists1.remove(8);

    // sorting the lists
    lists1.sort();
    display(lists1);

    // reversing the lists
    lists1.reverse();
    display(lists1);

    list<int> lists2(3); // empty lists of size 3
    list<int>::iterator iter;
    iter = lists2.begin();
    *iter = 7;
    iter++;
    *iter = 6;
    iter++;
    *iter = 3;
    display(lists2);
    // merging of list.

    lists1.merge(lists2);
    cout << "AFter the merging lists1: " << endl;
    display(lists1);

    return 0;
}