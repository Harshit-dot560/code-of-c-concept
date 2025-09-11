// for member function of vector use cpp vector method.


#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //  cout<< v.at(i)<< " ";
    }
    cout << endl;
}
int main()
{
    // Creating vector

    
    vector<int> vec1;
    int element, size;
    cout << " Enter the size of the vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
     vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1,3, 556);
    display(vec1);

     vector<char> vec2(4); // 4-elements character vector  from vec2
      vec2.push_back('5');
      display(vec2);
      

    vector<int> vec4(3, 13); // 3-elements vector 13th
    display(vec4);
    cout << vec4.size();
    return 0;
}