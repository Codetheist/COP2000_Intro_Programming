//Antoine Gustave
//Rhoda’s Strikeforce Gym
//Date: 10/15/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <iomanip>
using namespace std;

class membership_tier {

  public:
  void gold_members();
  void silver_members();
  void bronze_member();
};

//Menu option
string olympic_winner = "Gold";
string olympic_runnerup = "Silver";
string olympic_a_for_effort = "Bronze";
string olympic_failure = "Quit";

const double gold_member_fee = .01;
const double silver_member_fee = .02;
const double bronze_member_fee = .04;

int power_level = 4;
int cost_of_fee_per_yr;

double initial_gym_fee = 1200.00;
double total_fee = 0.0;

//Function of membership
void gold_members() {

  for(cost_of_fee_per_yr = 1; cost_of_fee_per_yr <= 10;) {

    cout << "Year" << setw(4) << cost_of_fee_per_yr << setw(10) << initial_gym_fee << endl;

    total_fee = initial_gym_fee * gold_member_fee;
    initial_gym_fee += total_fee;

    cost_of_fee_per_yr++;

  }
}

void silver_members() {

  for(cost_of_fee_per_yr = 1; cost_of_fee_per_yr <= 10;) {

    cout << "Year" << setw(4) << cost_of_fee_per_yr << setw(10) << initial_gym_fee << endl;

    total_fee = initial_gym_fee * silver_member_fee;
    initial_gym_fee += total_fee;

    cost_of_fee_per_yr++;

  }
}

void bronze_members() {

  for(cost_of_fee_per_yr = 1; cost_of_fee_per_yr <= 10;) {

    cout << "Year" << setw(4) << cost_of_fee_per_yr << setw(10) << initial_gym_fee << endl;

    total_fee = initial_gym_fee * bronze_member_fee;
    initial_gym_fee += total_fee;

    cost_of_fee_per_yr++;

  }
}


int main() {

  //Display
  cout << "             Welcome to Rhoda’s Strikeforce Gym!!" << endl;
  cout << "x----------------------------------------------------x" << endl;
  cout << "            Membership Fee Calculator" << endl << endl;
  cout << " 1. " << olympic_winner << endl;
  cout << " 2. " << olympic_runnerup << endl;
  cout << " 3. " << olympic_a_for_effort << endl;
  cout << " 4. " << olympic_failure << endl << endl;

  //Asking the user
  cout << "Please select your power level (1-3 Enter 4 to Quit) > ";
  cin >> power_level;
  cout << endl;
  cout << endl;


  cout << setprecision(2) << fixed << showpoint;

  do {

	  switch(power_level) {

		  case 1: if (power_level == 1) {

			  gold_members();

			  cout << endl;
			  cout << "Please select your power level (1-3 Enter 4 to Quit) > ";
			  cin >> power_level;
			  cout << endl;

			  break;
			}

			case 2: if (power_level == 2) {

				silver_members();

				cout << endl;
				cout << "Please select your power level (1-3 Enter 4 to Quit) > ";
				cin >> power_level;
				cout << endl;

				break;
			}

			case 3: if (power_level == 3) {

				bronze_members();

				cout << endl;
				cout << "Please select your power level (1-3 Enter 4 to Quit) > ";
				cin >> power_level;
				cout << endl;

				break;
			}

			case 4:  if (power_level == 4) {

				break;
			}

			default:

			cout << "Seems like you're not ready to be a warrior.";

			cout << endl;
			cout << "Please select your power level (1-3 Enter 4 to Quit) > ";
			cin >> power_level;
			cout << endl;

		}

	}

	while (power_level != 4);

	cout << endl;

	  /*Nothing personal to you teach. A pain in the ass to do for the calc part.
	  I know it's going to get tougher from here on out, but expressing my friendly
	  frustration.
	  */

    cout << "Thanks for using Rhonda’s Fee Calculator." << endl;

	  cout << "....................../´¯/) " << endl;
	  cout <<"....................,/¯../ " << endl;
	  cout <<".................../..../ " << endl;
	  cout <<"............./´¯/'...'/´¯¯`·¸ " << endl;
	  cout <<"........../'/.../..../......./¨¯\\ " << endl;
	  cout <<"........('(...´...´.... ¯~/'...') " << endl;
	  cout <<".........\\.................'...../ " << endl;
	  cout <<"..........''...\\.......... _.·´ " << endl;
	  cout <<"............\\..............( " << endl;
	  cout <<"..............\\.............\\... this homework. Lol :)." << endl << endl;

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
