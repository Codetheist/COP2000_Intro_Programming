//Antoine Gustave
//Missing Number Game
//Date: 11/26/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <iomanip>
#include <cstdlib>
//#include <vector>
using namespace std;

void instructions();
void displayBoard(int[]);
int beginGame(bool[], int, int);
bool testWinner(int, int, int[]);

int main() {

  const int MAX_VALUE = 3;
  const int MIN_VALUE = 3;
  const int ROW = 4, COL = 3, user_guesses = 3;

  bool isGameOver = false;

  bool playedBoards[3] = {false, false, false};

  int randomNum = ( rand( ) % ( MAX_VALUE - MIN_VALUE + 1 ) ) + MIN_VALUE;

  int board_game_1[ROW][COL] = {{90, 9, 45}, {66, 12, 48}, {34, 7, 70}, {44, 0, 26}};
  int board_game_2[ROW][COL] = {{28, 10, 55}, {89, 17, 98}, {22, 4, 31}, {69, 0, 78}};
  int board_game_3[ROW][COL] = {{38, 11, 83}, {15, 6, 33}, {10, 2, 20}, {86, 0, 95}};

  int ans = 0;
  int boardNum = 0;
  int ansboard[3] = {14, 15, 8};

  int game_board[ROW][COL];

  int user_input = 0;
  int win_count = 0;
  int user_guess = 0;
  int board_selected = -1;

  //instructions();

  board_selected = beginGame(playedBoards, MAX_VALUE, MIN_VALUE);

  instructions();

  // do below inside of loop
  do {

    displayBoard(game_board[3]);

    cout << endl << "Enter your guess or 0 to exit >> ";
    cin >> user_input;

    if(user_input == 0) {

      cout << "Tis' quite unfortunate perhaps after some training you should be ready to try again. Until next time. Farewell, my friend." << endl;

      return 0;

    } else {

      while(user_input < 0)

      cout << "Please enter a valid number; otherwise, forfeit the game." << endl;
      cin >> user_input;
    }

    // get user's answer and store in variable
    testWinner(user_input, boardNum, ansboard);
    if(isGameOver != false) {

      switch (board_selected) {

        case 0:
        win_count++;
        playedBoards[0] = true;
        break;
      }

    } else if (isGameOver != false && (playedBoards[0] != false || playedBoards[1] != false || playedBoards[2] != false)) {

      cout << "Do you wush to play again?? Enter 0 to Exit or any number to continue...>> " << endl;
      cin >> user_input;

    } else if (user_input == 0) {

      cout << "Tis' quite unfortunate perhaps after some training you should be ready to try again. Until next time. Farewell, my friend." << endl;
      return 0;

    } else if(user_input < 0) {

      cout << "Please enter a valid number; otherwise, forfeit the game." << endl;
      cin >> user_input;

    } else {

      if(user_input != 0) {

        beginGame(playedBoards, MAX_VALUE, MIN_VALUE);
      }

    } while (isGameOver == false/*playedBoards[0] != false || playedBoards[1] != false || playedBoards[2] != false*/);

    cout << "*** You are the number guessing Champion!! CONGRATULATIONS!! ***" << endl;
    return 0;
  }
}

void instructions() {
  cout << "*****************************************************************" << endl;
  cout << setw(38) << "MISSING NUMBERS GAME" << endl;
  cout << setw(39) << "A fun brain game..." << endl;
  cout << setw(62) << "Please Enter a whole number to guess the missing number..." << endl;
  cout << setw(50) << "Program Developed by: Antoine Gustave" << endl;
  cout << "*****************************************************************" << endl;
}

void displayBoard(int board[][3], int row_size, int col_size) {

  int randomNum;
  const int ROW = 4, COL = 3;
  row_size = 4;
  col_size = 3;
  int board_game_1[ROW][COL], board_game_2[ROW][COL], board_game_3[ROW][COL];

  switch (randomNum) {

    case 0:

    for (int i = 0; i < row_size; i++) {

      for (int j = 0; j < col_size; j++) {

        cout /* << setw()*/ << board_game_1[i][j] << " ";

      }

      cout << endl;
    }
    break;

    case 1:

    for (int i = 0; i < row_size; i++) {

      for (int j = 0; j < col_size; j++) {

        cout /* << setw()*/ << board_game_2[i][j];
      }

      cout << endl;
    }
    break;

    case 2:

    for (int i = 0; i < row_size; i++) {

      for (int j = 0; j < col_size; j++) {

        cout /* << setw()*/ << board_game_3[i][j];
      }
      cout << endl;
    }
    break;
  }
}

/*This function's only purpose is to choose randomly a previously-unchosen board (by looking at the arg passed to it and selecting randomly again when needed.)
Once that unique value has been chosen, use the return statement to notify the rest of the program.*/
int beginGame(int playedBoards[]) {

  int randomNum = 0;
  int boardNum = 0;
  const int MAX_VALUE = 3;
  const int MIN_VALUE = 3;

  switch (randomNum) {

    case 0:

    do {

      int randomNum =( rand( ) % ( MAX_VALUE - MIN_VALUE + 1 ) ) + MIN_VALUE;

      randomNum = boardNum;

      return randomNum;

    } while(playedBoards[0] != false);
    break;

    case 1:

    do {

      int randomNum = ( rand( ) % ( MAX_VALUE - MIN_VALUE + 1 ) ) + MIN_VALUE;

      randomNum = boardNum;

      return randomNum;

    } while(playedBoards[1] != false);
    break;

    case 2:

    do {

      int randomNum = ( rand( ) % ( MAX_VALUE - MIN_VALUE + 1 ) ) + MIN_VALUE;

      randomNum = boardNum;

      return randomNum;

    } while(playedBoards[2] != false);
    break;
  }

  return 0;
}

bool testWinner(int &ans, int boardNum, int ansboard[]) {

  int user_input;

  if (user_input == ansboard[boardNum]) {

    cout << "You are a number genius!!" << endl;

    return true;

  } else {

    cout << "I am sorry that was incorrect...";

    return false;
  }
}
