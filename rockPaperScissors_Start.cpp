//This code is written by Prof Clark
//You must use all of my code as written and
//do not alter it. Use the comments below
//main to determine what your functions need
//to do. Look for the TODO words within this file.

//Kit Edwards 
//Tuesday Thursday 11-12:45 Programming Fundamentals I
//Lab 6a: Rock Paper Scissors
//This program plays Rock, Paper, Scissors with the user

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//function prototypes
int getComputerChoice();
void printMenu();
int chooseWinner(int, int);
string displayWordChoice(int);

int main()
{
	srand(time(0));
	int computerChoice, playerChoice, winningPlayer;
	char playAgain;
	do
	{
		computerChoice = getComputerChoice();
		printMenu();
		cout << "What do you choose? ";
		cin >> playerChoice;
		while (playerChoice < 1 || playerChoice > 3)
		{
			cout << "That was not a valid choice.  Try again." << endl;
			printMenu();
			cout << "What do you choose? ";
			cin >> playerChoice;
		}
		cout << endl << "You chose: " << displayWordChoice(playerChoice) << endl;
		cout << "Computer chose: " << displayWordChoice(computerChoice) << endl;
		winningPlayer = chooseWinner(playerChoice, computerChoice);
		if (winningPlayer == 1)
			cout << "*** You win! ***" << endl;
		else if (winningPlayer == 2)
			cout << "*** Computer Wins! ***" << endl;
		else
			cout << "*** It's a tie! ***" << endl;
		cout << endl << "Want to play again? (y/n): ";
		cin.ignore();
		cin.get(playAgain);
	} while (playAgain == 'Y' || playAgain == 'y');
	return 0;
}

//getComputerChoice returns a random number 1-3 symbolizing the 
//computer choosing rock, paper, or scissors (in that order)
int getComputerChoice()
{
	return rand()%3+1;
}

//TODO: write function

//printMenu prints a menu of options for the user.  Choices are 1-3
//symbolizing choosing rock, paper, or scissors (in that order)
void printMenu()
{
	cout<< "Here are your options \n 1. Rock \n 2. Paper \n 3. Scissors \n";
}

//TODO: write function


//chooseWinner returns a 1 if the user wins, 2 if the Computer wins,
//or 3 if it is a tie.
//To determine a winner:
//rock beats scissors
//paper beats rock
//scissors beats paper

int chooseWinner(int playerChoice,int computerChoice)
{
	//scenarios where computer wins
	if ((playerChoice==1&&computerChoice==2)||(playerChoice==2&&computerChoice==3)||(playerChoice==3&&computerChoice==1))
	return 2;//computer wins
	//scenarios where player wins
	else if((playerChoice==1&&computerChoice==3)||(playerChoice==2&&computerChoice==1)||(playerChoice==3&&computerChoice==2))
	return 1;
	//scenarios where they are even...
	else
	return 3;

}

//TODO: write function

//displayWordChoice returns a string with the word Rock, Paper, or Scissors
//based upon the numeric choice passed into the function (1 = Rock, 2 = Paper,
//3 = Scissors)

//TODO: write function
string displayWordChoice(int choice)
{
	string string1= " Rock ";
	string string2= " Paper ";
	string string3= " Scissors";
	if (choice==1)
	return string1;
	else if (choice==2)
	return string2;
	else 
	return string3;
}

