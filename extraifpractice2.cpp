//extra practice if/else if statement

#include <iostream>
using namespace std;

int main ()
{
    const double DISCOUNT= .10;
    int items;
    //ask user for amount of 100 dollar items
    cout<< "how many items of 100 dollars did you get?";
    cin>> items;
    //if they spend more than 1000 (10 x) then they get discount
    if (items>= 10)
    {
        cout << items* 100 * (1.00 - DISCOUNT) << " is your total after a discount!";
    }
    else 
    {
        cout<< items * 100<< " is your total";
    }

    //times their amount by 1.00 - discount 
    //display total cost after applyng discount


return 0;

}