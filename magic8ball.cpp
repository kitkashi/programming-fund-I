//magic 8 ball program by kit edwards
//for programming 1 professor clarke
#include <iostream>
#include <string>
#include <cstdlib>//for rand and srand
#include <ctime>//where time lives
using namespace std;

int main()
{
    char keepPlaying;
    srand(time(0));//gets a different huge number in algotithm time
    //seeded outside of the loop
    do
    {
    string userQuestion;//initializing variable inside the loop so it is not stored overall
    cout<<"Give me a question and I shall give you an answer\n";
    getline(cin,userQuestion);
    string eightBallAnswer[8]={"YES...\nis what I would say if I was wrong","I think you want this more than the universe does.",
    "All roads point to yes","What would your mother say?","Not at this moment, no.","Please ask again at a later time.",
    "The future seems murky in this regard.","Why not?."};
    
    int arrayNum=rand()% 8;//rand()% choices + where do i start.

    cout<< eightBallAnswer[arrayNum];
    cout<< "\nWould you like to play again? y/n";
    cin.get(keepPlaying);
    cin.ignore();
    }
    while (keepPlaying=='y'||keepPlaying=='Y');
    
    return 0;
}