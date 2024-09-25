#include <iostream>
#include <string>
using namespace std;

int main()

{
    int age;
    string dogName;
    
    cout << "What is your dogs age? ";
    cin >> age;
    cin.ignore();//ignore the\n in the keybord buffer
    cout<< "What is your dogs name? ";
    getline(cin,dogName);
    int dogYears= age *7;//make sure to put calculations after input
    cout << dogName << ", you are " << dogYears << " years old!";
    return 0;

}
