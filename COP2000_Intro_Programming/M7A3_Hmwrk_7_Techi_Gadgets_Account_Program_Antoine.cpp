//Antoine Gustave
//Techi Gadgets Account Program
//Date: 12/10/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

void showAll(string theAccounts[5][7]);
void sortInput(string theAccounts[5][7]);
bool readFile(string theAccounts[5][7]);
bool validateUser(string theAccounts[5][7], string, string, int*);
const int ROW = 5, COL = 7;

int main() {

  cout << setprecision(2) << fixed << showpoint;
  bool isUserAccountActive = true;
	bool isThisTheFileYouWant = true;
	int find_rows_of_usrnme = 0;
	string account_usrnm = "";
	string user_account_pwd = "";
	string lists_of_accounts[ROW][COL] = { " " };

	isThisTheFileYouWant = readFile(lists_of_accounts);

  if (isThisTheFileYouWant == true) {

    cout << "The file was read succesfully..." << endl;

  } else {

    cout << " The file was not read succesfully... exiting program." << endl;

    return 0;

  }

  sortInput(lists_of_accounts);

  do {

    account_usrnm = "";
		user_account_pwd = "";


		//Ask user for account_usrnm & user_account_pwd
		cout << "Enter the following information, or press 0 to Exit anytime..." << endl;
		cout << "Please enter your User Name :";
		cin >> account_usrnm;

    if (account_usrnm == "0") {

      cout << "Thank You, have a nice day." << endl;

      return 0;

    }

    cout << "Please Enter your password :";
		cin >> user_account_pwd;

		if (user_account_pwd == "0") {

      cout << "Cool that worked!" << endl;
			return 0;

    }

    isUserAccountActive = validateUser(lists_of_accounts, account_usrnm, user_account_pwd, &find_rows_of_usrnme);

    if (isUserAccountActive == true) {

      if (lists_of_accounts[find_rows_of_usrnme][ROW] == "A") {

        showAll(lists_of_accounts);

      } else {

        cout << "Welcome Back " << lists_of_accounts[find_rows_of_usrnme][1] << "!" << endl;
        cout << setw(8) << left << lists_of_accounts[find_rows_of_usrnme][1];
        cout << setw(8) << left << lists_of_accounts[find_rows_of_usrnme][2];
        cout << setw(6) << left << lists_of_accounts[find_rows_of_usrnme][4];
        cout << setw(4) << left << lists_of_accounts[find_rows_of_usrnme][5];
        cout << setw(15) << left << lists_of_accounts[find_rows_of_usrnme][6];
        cout << endl << endl;
      }

    } else {

      cout << "Don't you know your login do not match, please try again ..." << endl;

    }

  } while (user_account_pwd != "0" || account_usrnm != "0");

  return 0;

}

void showAll(string theAccounts[ROW][COL]) {

  ofstream outputFile;

  outputFile.open("sortedBackup.txt");

  cout << endl;

  for (int i = 0; i < ROW; i++) {

    cout << setw(20) << right << theAccounts[i][0];
		cout << setw(8) << right << theAccounts[i][1];
		cout << setw(8) << right << theAccounts[i][2];
		cout << setw(10) << right << theAccounts[i][3];
		cout << setw(6) << right << theAccounts[i][4];
		cout << setw(4) << right << theAccounts[i][5];
		cout << setw(15) << right << theAccounts[i][6];
		cout << endl;

		outputFile << setw(20) << right << theAccounts[i][0];
		outputFile << setw(8) << right << theAccounts[i][1];
		outputFile << setw(8) << right << theAccounts[i][2];
		outputFile << setw(10) << right << theAccounts[i][3];
		outputFile << setw(6) << right << theAccounts[i][4];
		outputFile << setw(4) << right << theAccounts[i][5];
		outputFile << setw(15) << right << theAccounts[i][6];
		outputFile << endl;
	}

  cout << "Backup file created .... " << endl;

  outputFile.close();

}

void sortInput(string theAccounts[ROW][COL]) {

  bool isTheFileSorted = false;
  string store_files_temporary;

  while (!isTheFileSorted) {

    isTheFileSorted = true;

    for (int i = 0; i < 4; ++i) {

      if (theAccounts[i][2] > theAccounts[i + 1][2]) {

        isTheFileSorted = false;

        for (int j = 0; j < COL; ++j) {

          store_files_temporary = theAccounts[i][j];
          theAccounts[i][j] = theAccounts[i + 1][j];
          theAccounts[i + 1][j] = store_files_temporary;
        }
      }
    }
  }
}

bool readFile(string theAccounts[ROW][COL]) {

  bool WasTheFileRead = false;
  ifstream inputFile;
  inputFile.open("lists_of_accounts.txt");

  if (inputFile) {

    WasTheFileRead = true;

    for (int i = 0; i < ROW; i++) {

      for (int j = 0; j < COL; j++){

        inputFile >> theAccounts[i][j];
      }
    }
  }

  inputFile.close();

  return WasTheFileRead;
}

bool validateUser(string theAccounts[ROW][COL], string account_usrnm, string user_account_pwd, int *find_rows_of_usrnme) {

  bool DidThisPass = false;
	int accounts_usrnmes = 0;
	int user_passwords = 3;
	int rows_of_usrnmes = 0;

	//Search for matching accts and pass and if it cant to return false

	for (int i = 0; i <= 4; i++) {

    if ((account_usrnm == theAccounts[i][accounts_usrnmes]) && (user_account_pwd == theAccounts[i][user_passwords])) {

      DidThisPass = true;

      *find_rows_of_usrnme = rows_of_usrnmes;
    }

  }

  return DidThisPass;

}
