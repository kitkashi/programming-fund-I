//this program converts bitcoin and etherium to real $$$
//september 22nd, 2024
//kit edwards
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dollars;//because instructions say whole # of dollars
    const double BTC_PER_DOLLAR = .000018;
    const double ETH_PER_DOLLAR =.00044;
    

    cout<< "Please enter a dollar amount to convert into Bitcoin and Ethereum:\n";
    cin>> dollars;

    cout<< "\nUsing the conversion rates of 1.8e-05 Bitcoin per dollar and 0.00044 Ethereum per dollar: \n \n";
    cout<< fixed << setprecision(3);
    cout << dollars << " dollars = " << dollars * BTC_PER_DOLLAR << " Bitcoin.\n";
    cout << dollars << " dollars = "<< dollars * ETH_PER_DOLLAR << " Ethereum.\n";
    return 0;
}