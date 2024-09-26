#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<< "num? ";
    cin>> num;

    if (num <0)//in the user error case that the user puts a number under 0
    {
        cout<< "Please add another number above 0";
    }
    else if (num <= 5)
    {
        cout << "low";
    }//once this is filled, nothing else is executed
    else if (num <=10)
    {
        cout << "medium";
    }
    else //means otherwise, dont add () it just means if neither is fulfilled
    {
        cout << "high";
    }
}