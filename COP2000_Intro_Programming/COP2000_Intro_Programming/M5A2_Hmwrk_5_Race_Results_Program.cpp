//Antoine Gustave
//Race Results Program
//Date: 10/29/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <string>
using namespace std;

//Function Prototype
void welcome();
void getRaceTime(string &, double &);
void findWinner(string, string, string, double, double, double);
double raceAverage(double, double, double);

int main() {

  string racer_a_name, racer_b_name, racer_c_name;
  double racer_a_time = 0;
  double racer_b_time = 0;
  double racer_c_time = 0;
  double average_race_times = 0;
  string user_input_racers_name;
  double user_input_racers_time = 0;
  double race_results = 0;


  //Display
  welcome();

  //Asking the user
  getRaceTime(racer_a_name, racer_a_time);
  cout << endl;
  getRaceTime(racer_b_name, racer_b_time);
  cout << endl;
  getRaceTime(racer_c_name, racer_c_time);
  cout << endl;

  //Calculating the winner
  findWinner(racer_a_name, racer_b_name, racer_c_name, racer_a_time, racer_b_time, racer_c_time);

  //Calculating the average time
  race_results = raceAverage(racer_a_time, racer_b_time, racer_c_time);
  cout << "Overall Race Time Average: " << race_results << endl;

  return 0;
}

void getting_racers_info(string &user_input_racers_name, double &user_input_racers_time) {

  cout << "Please enter the racer's first name > ";
  cin >> user_input_racers_name;
  cout << "Please enter the racer's time > ";
  cin >> user_input_racers_time;

  while (user_input_racers_time <= 0) {

    cout << "Invalid time input...time must be greater than 0" << endl;

    cout << "Please enter the racer's time > ";
    cin >> user_input_racers_time;

  }
}

void findWinner(string racer_a_name, string racer_b_name, string racer_c_name, double racer_a_time, double racer_b_time, double racer_c_time) {

  if ((racer_a_time < racer_b_time) && (racer_a_time < racer_c_time)) {

      cout << "Congradulations " << racer_a_name <<"!!!" << " You are the winner!!" << endl;
      cout << "***** Your wining time is: " << racer_a_time <<" *****" << endl << endl;

    } else if ((racer_b_time < racer_a_time) && (racer_b_time < racer_c_time)) {

      cout << "Congradulations " << racer_b_name <<"!!!" << " You are the winner!!" << endl;
      cout << "***** Your wining time is: " << racer_b_time <<" *****" << endl << endl;

    } else if ((racer_c_time < racer_a_time) && (racer_c_time < racer_b_time)) {

      cout << "Congradulations " << racer_c_name <<"!!!" << " You are the winner!!" << endl;
      cout << "***** Your wining time is: " << racer_c_time <<" *****" << endl << endl;

    } else if ((racer_b_time < racer_a_time) && (racer_b_time == racer_c_time)) {

      cout << "We have a TIE " << racer_b_name << " and " << racer_c_name <<" win!!" << endl;
      cout << "***** Your wining time is: " << racer_b_time <<" *****" << endl << endl;

    } else if ((racer_c_time < racer_b_time) && (racer_c_time == racer_a_time)) {

      cout << "We have a TIE " << racer_c_name << " and " << racer_a_name <<" win!!" << endl;
      cout << "***** Your wining time is: " << racer_a_time <<" *****" << endl << endl;

    } else if ((racer_b_time < racer_c_time) && (racer_b_time == racer_a_time)) {

      cout << "We have a TIE " << racer_b_name << " and " << racer_a_name <<" win!!" << endl;
      cout << "***** Your wining time is: " << racer_a_time <<" *****" << endl << endl;

    } else {

      cout << "It seems that we have a 3-way tie." << endl;
      cout << "***** Your wining time is: " << racer_a_time <<" *****" << endl << endl;
  }
}

double raceAverage(double racer_a_time, double racer_b_time, double racer_c_time) {

  double average_race_times = (racer_a_time + racer_b_time + racer_c_time) / 3;

  return average_race_times;
}

void welcome() {

  cout << "***********************************************" << endl << endl;
  cout << "Welcome to Race Results Program" << endl;
  cout << "You Asked to Enter the Three Racers Names" << endl;
  cout << "and Their Associated Race Time" << endl;
  cout << "Please enter a real number for Race TIme (the Race Time Must be > 0)." << endl;
  cout << "Program Develop by: Antoine Gustave" << endl << endl;
  cout << "***********************************************" << endl << endl;
}

/*Algorithm Used

*/
