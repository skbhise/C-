#include <iostream>
using namespace std;
int main()
{
    //
    string s;
    cout << "Enter a String";
    getline (cin,s);
    cout << "you have entered : ";
    cout << s << endl;
    s.push_back('y');
    cout << "After using pushback function " << s<< endl;

    s.pop_back();
    cout << "After using popback function " << s << endl;

    return 0;
}