//Antoine Gustave
//Missing Number Game
//Date: 11/26/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void instructions();
void displayBoard(int board[][3]);
int beginGame(int playedBoards[]);
bool testWinner(int, int, int[]);

int main() {

  cout << setprecision(2) << fixed << showpoint;

  const int MAX_VALUE = 3;
  const int MIN_VALUE = 3;
  const int ROW = 4, COL = 3;

  bool isGameOver = false;

  int playedBoards[3] = {false, false, false};

  int randomNum = ( rand( ) % ( MAX_VALUE - MIN_VALUE + 1 ) ) + MIN_VALUE;

  int board_game_1[ROW][COL] = {{90, 9, 45}, {66, 12, 48}, {34, 7, 70}, {44, false, 26}};
  int board_game_2[ROW][COL] = {{28, 10, 55}, {89, 17, 98}, {22, 4, 31}, {69, false, 78}};
  int board_game_3[ROW][COL] = {{38, 11, 83}, {15, 6, 33}, {10, 2, 20}, {86, false, 95}};

  int ans = 0;
  int boardNum = 0;
  int ansboard[3] = {14, 15, 8};

  int win_count = 0;
  int user_guess = 0;
  int board_selected = -1;

  instructions();

  board_selected = beginGame(playedBoards);
  user_guess = 0;

  instructions();

  // do below inside of loop
  do {

    do {

      switch (boardNum) {

        case 0:
        displayBoard(board_game_1);
        break;

        case 1:
        displayBoard(board_game_2);
        break;

        case 2:
        displayBoard(board_game_3);
        break;
      }

      cout << endl << "Enter your guess or 0 to exit >> ";
      cin >> ans;

      while (ans < 0) {

        cout << "Please enter a valid number; otherwise, forfeit the game." << endl;

        cin >> ans;

      }

      if (ans == 0) {

        cout << "Tis' quite unfortunate perhaps after some training you should be ready to try again. Until next time. Farewell, my friend." << endl;

        return 0;

      }

      isGameOver = testWinner(ans, boardNum, ansboard);

      if(isGameOver != false) {

        win_count += 1;

        playedBoards[boardNum] = 1;

        if(win_count == COL) {

          cout << "*** You are the number guessing Champion!! CONGRATULATIONS!! ***" << endl;

        }

        cout << "Want to go again?" << endl;
        cin >> ans;

        if (ans == 0) {

          cout << "Tis' quite unfortunate perhaps after some training you should be ready to try again. Until next time. Farewell, my friend." << endl;

          return 0;

        }

      } else {

        user_guess += 1;
      }

    }

    while (isGameOver != false && user_guess < 3);

    if (user_guess == 3) {

        cout << "You failed! Better luck next time." << endl;

        cout << "Care to try again?" << endl;

        if (ans == 0) {

        cout << "Tis' quite unfortunate perhaps after some training you should be ready to try again. Until next time. Farewell, my friend." << endl;

        return 0;
        }
    }


  } while (win_count < 3);
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

  int row_size = 4;
  int col_size = 3;

  for (int i = 0; i < row_size; i++) {

    for (int j = 0; j < col_size; j++) {

      if(board[i][j] == false) {

        cout << setw(8) << board[i][j] << " ";

      }

      cout << endl;

    }

  }

}

/*This function's only purpose is to choose randomly a previously-unchosen board (by looking at the arg passed to it and selecting randomly again when needed.)
Once that unique value has been chosen, use the return statement to notify the rest of the program.*/
int beginGame(int playedBoards[]) {

  int randomNum = 0;
  srand(time(0));
  const int MAX_VALUE = 3;
  const int MIN_VALUE = 3;

  do {

    randomNum =( rand( ) % ( MAX_VALUE - MIN_VALUE + 1 ) ) + MIN_VALUE;

    if(playedBoards[randomNum] == 0)

    return randomNum;

  } while (playedBoards[randomNum]  != 0);

  return 0;
}

bool testWinner(int ans, int boardNum, int ansboard[]) {

  if (ans == ansboard[boardNum]) {

    cout << "You are a number genius!!" << endl;

    return true;

  } else {

    cout << "I am sorry that was incorrect...";

    return false;

  }

}
