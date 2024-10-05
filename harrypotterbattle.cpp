//Kit Edwards
//class Tuesday Thursday at 11-12:50
//This program allows for you to choose how to destroy Harry Potters HP
#include <iostream>
using namespace std;

int main()
{
    //the health user inputs 
    int health;
    //user choice 
    int choice; 
    //harrys health
    int harryHealth=101; //so the health is 
    //damage done by creatures
    const int PIXIE=20,
    GNOME=40,BASIL=80, DRAGON=100;

    cout <<"Harry potter is being attacked! You decide if he lives or dies. \n";
    cout << "How much health should he start with? (1-100) ";
    cin >> health;

    //checks to see that the users input is valid
        if (health<=100&&health>0)
    cout<< "thank you for putting in the correct input \n";
    else if(!(health<=100&&health>0))
    {
        cout<< "Please go back and put a number 1-100\n";
        return 0;
    }

    cout << "What creature is attacking?\n";
    cout << "1. Cornish Pixie \n";
    cout << "2. Gnome \n";
    cout << "3. Basilisk \n";
    cout << "4. Dragon \n";
    cout << "Enter your choice as an integer: ";
    cin >> choice;

    //switch matches the choice with what the user inputs to see what creature is attacking
    switch (choice)
    {
        case 1: cout << "Harry is attacked by a Cornish Pixie which deals " << PIXIE << " damage.\n";
        harryHealth= health -PIXIE;//assigning the variable to the value of health - pixie
        cout<< "Harry ends with " << harryHealth << " health \n";
        break;
        case 2: cout << "Harry is attacked by a Gnome which deals " << GNOME << " damage.\n";
        harryHealth= health-GNOME;
        cout<< "Harry ends with " << harryHealth << " health\n";
        break;
        case 3: cout << "Harry is attacked by a Basilisk which deals " << BASIL << " damage.\n";
        harryHealth=health- BASIL ;
        cout<< "Harry ends with " << harryHealth << " health\n";
        break;
        case 4: cout << "Harry is attacked by a Dragon which deals " << DRAGON << " damage.\n";
        harryHealth= health- DRAGON;
        cout<< "Harry ends with " << harryHealth << " health\n";
        break;
        default:
        cout<<"You silly that is not a case number!";
        
    }
    //provides user with a win or lose screen
    if (harryHealth>0 && harryHealth<100)
            {
                cout<< "Harry survives!\n";
            }
    else if(harryHealth<=0)
            {
                cout<< "Harry does not survive aw :c \n";
            }
    return 0;

}