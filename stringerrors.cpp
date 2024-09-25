#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    char ch;
    int number,num2;
    
    cout << "Enter a number: ";
    cin >> number;
    cout<< "Name ?";
    cin.ignore();// skip the \n in the buffer
    getline(cin,name);
    cout<<"Enter another number:";
    cin>> num2;
    cout<< "Enter a character:";
    cin.ignore();//skip the \n from num
    ch = cin.get();
    cout << "Thank You!\n";
    return 0;
}