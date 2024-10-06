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

    cout<<setprecision(3);//makes the total numbers shown be 3 sigfigs 
    cout<< "\nUsing the conversion rates of "<< BTC_PER_DOLLAR <<" Bitcoin per dollar and ";
    cout<< ETH_PER_DOLLAR << " Ethereum per dollar: \n \n";
    cout<< fixed << setprecision(3);//fixed makes the decimal always after the first one
    cout << dollars << " dollars = " << dollars * BTC_PER_DOLLAR << " Bitcoin.\n";
    cout << dollars << " dollars = "<< dollars * ETH_PER_DOLLAR << " Ethereum.\n";
    return 0;
}