//Antoine Gustave
//Race Results Program
//Date: 10/29/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <iomanip>
using namespace std;

class racers_time {

  public:
    /*void speed_racer_a(racer_a_name, racer_time) {
      // code
    }

    void speed_racer_b(racer_b_name, racer_time) {
      // code
    }

    void speed_racer_c(racer_c_name, racer_time) {
      // code
    }

    void results_for_the_winner(speed_racer_a, speed_racer_b, speed_racer_c) {
      // code
    }*/
};

string racer_a_name, racer_b_name, racer_c_name;
float racer_time;


int main() {

  //Display
  cout << "***********************************************" << endl << endl;
  cout << setw(4) << "Welcome to Race Results Program" << endl;
  cout << setw(2) << "You Asked to Enter the Three Racers Names" << endl;
  cout << setw(2) << "and Their Associated Race Time" << endl << endl;
  cout << "***********************************************" << endl << endl;

  cout << setw(2) << "Please enter a real number for Race TIme (the Race Time Must be > 0)." << endl;
  cout << setw(2) << "Program Develop by: Antoine Gustave" << endl << endl;

  //Asking the user
  cout << "Please enter the racer's first name > ";
  cin >> racer_a_name;

  return 0;
}
/*Algorithm Used
	1. Write out the persons request
	2. Come up with the names for the variables and set the values
		const double gold_member_fee = .01;
		const double silver_member_fee = .02;
		const double bronze_member_fee = .04;

		string olympic_runnerup = "Silver";
		string olympic_a_for_effort = "Bronze";
		string olympic_failure = "Quit";

		int power_level = 4;
		int cost_of_fee_per_yr;

		double initial_gym_fee = 1200.00;
		double total_fee = 0.0;
	3. Display my menu to the potential clients
	4. Ask for their power level and input their levels
	5. Run this while loop
	6. Set switch to different levels base on users power level
	7. Assigned the correct function to each switch
	8. Create a for loop to display years
	9. Loop through through the calculation
	10. Quit after power level is over 9000!!!
*/
