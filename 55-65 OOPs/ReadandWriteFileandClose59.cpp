#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with hout stream
    ofstream hout{"sample61.txt"};

    // creating a string and filling it with the string entered by the user
    string name;
    cout << "Enter your name " << endl;
    getline(cin, name);
    // writing a string to this file
    hout << "my name is " + name;
    hout.close();
    
    ifstream hin("sample61.txt");
    string content;
getline(hin, content);
    cout << "content is: " << content;
    hin.close();
    return 0;
}