#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string name1;
    string name2;

    cout<<"enter in a name \n";
    cin>> name1;
    cout<< "enter in another name\n";
    cin>>name2;

    if(name1>name2)//the first value in the name 1 is further in the alphabet
    {
        cout << name2 << "\n";
        cout << name1 << "\n";
    }
    else if(name2>name1)//1st letter of name 2 comes later in the alphabet 
    {
        cout<< name1 << "\n";
        cout<< name2 << "\n";
    }
    return 0;
}