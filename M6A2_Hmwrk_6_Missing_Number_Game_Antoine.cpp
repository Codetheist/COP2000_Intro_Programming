//Antoine Gustave
//Missing Number Game
//Date: 11/26/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

void instructions();
void displayRandomBoard(int[]);
int beginGame(int[]);
bool testWinner(int[], int[]);

int main() {

  const int ROW = 3, COL = 4, users_guesses = 3;
  bool isGameOver = false;
  int board_game_1[ROW][COL] = {90, 9, 45, 66, 12, 48, 34, 7, 70, 44, NULL, 26};
  int board_game_2[ROW][COL] = {28, 10, 55, 89, 17, 98, 22, 4, 31, 69, NULL, 78};
  int board_game_3[ROW][COL] = {38, 11, 83, 15, 6, 33, 10, 2, 20, 86, NULL, 95};

  

  randomNum = ( rand( ) % ( maxValue - minValue + 1 ) ) + minValue;

  int user_input = 0;
  int user_guess = 0;
  int board_selected = -1;

  instructions();

  board_selected = beginGame();

  /*// do below inside of loop
  do {
    displayBoard(board_selected);
  } while(isGameOver == false);*/


  // get user's answer and store in variable
  //testWinner(/*see HW description*/);

  return 0

}

void instructions() {

  cout << "*****************************************************************" << endl;
  cout << setw(38) << "MISSING NUMBERS GAME" << endl;
  cout << setw(39) << "A fun brain game..." << endl;
  cout << setw(62) << "Please Enter a whole number to guess the missing number..." << endl;
  cout << setw(50) << "Program Developed by: Antoine Gustave" << endl;
  cout << "*****************************************************************" << endl;

}

void displayBoard(int board[][3]) {

  for (int i = 0; i < ROW; i++) {

    for (int j = 0; j < COL; j++) {

      cout << board_game_1;
    }
  }

  //switch (/* expression */) {
    //case /* value */:
  }

}

int beginGame(int playedBoards[]) {

  /*This function's only purpose is to choose randomly a previously-unchosen board (by looking at the arg passed to it and selecting randomly again when needed.)
  Once that unique value has been chosen, use the return statement to notify the rest of the program.*/

//}

bool testWinner() {

  //

}
