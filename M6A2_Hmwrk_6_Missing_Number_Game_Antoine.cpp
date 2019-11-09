//Antoine Gustave
//Missing Number Game
//Date: 11/19/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <cstdlib>
using namespace std;

/*randomNum = ( rand( ) % ( maxValue – minValue + 1 ) ) + minValue; */

void instructions();
void displayRandomBoard(int[]);
int beginGame(int[]);
bool testWinner(int[], int[]);

int main() {

  int user_input = 0;
  int board_selected = -1;

  instructions();

  board_selected = beginGame();

// do below inside of loop
displayBoard(/*need to pass an array here*/);

// get user's answer and store in variable
testWinner(/*see HW description*/);

}

void instructions() {

  cout << "instructions";

}

void displayBoard(int board[][3]) {

  // i am passed a randomly chosen board and output it to the screen nicely

  // formatted (display a blank or question mark for missing value)

}

int beginGame(int playedBoards[]) {

  /* This function's only purpose is to choose randomly a previously-unchosen board (by looking at the arg passed to it and selecting randomly again when needed.)
  Once that unique value has been chosen, use the return statement to notify the rest of the program.*/

}

bool testWinner() {

  //

}
