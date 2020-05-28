//Antoine Gustave
//Architect Area Calculator
//Date: 9/17/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <iomanip>
using namespace std;

class shape_formulas {
	
	public:
	void Start();
    void Rectangle();
    void Triangle();
    void Circle();
    void Quit();
};

//Menu option
string i_am_a_rectangle = "Rectangle";
string i_am_a_triangle = "Triangle";
string i_am_a_circle = "Circle";
string i_just_want_to_quit = "Quit";
string i_am_an_inch = " in";
string i_am_a_foot = " ft";
string i_am_a_yard = " yd";
string i_am_a_mile_long_gone = " mi";

int user_input_measurements = 4;

void Rectangle() {
	
	cout << "Rectangle:" << endl << endl;
	
	double area_of_rectangle, length_of_rectangle, width_of_rectangle;
	
	cout << "Please enter the length > "; cin >> length_of_rectangle;

	cout << "Please enter the width > "; cin >> width_of_rectangle;
	cout << endl;

	cout << "Please select a unit of measurement > ";
	cin >> user_input_measurements;
	cout << endl;
	
	if (user_input_measurements == 1) {
		
		if(length_of_rectangle <= 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_rectangle = length_of_rectangle * width_of_rectangle;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_rectangle << "sq" << i_am_an_inch << endl;
			}

	
	} else if (user_input_measurements == 2) {
		
		if(length_of_rectangle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_rectangle = length_of_rectangle * width_of_rectangle;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_rectangle << "sq" << i_am_a_foot << endl;
			}
	
	} else if (user_input_measurements == 3) {
		
		if(length_of_rectangle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_rectangle = length_of_rectangle * width_of_rectangle;
				
				cout << setprecision(2) << fixed << showpoint;

				cout << "Area = " << area_of_rectangle << "sq" << i_am_a_yard << endl;
			}
	
	} else {
		
		if(length_of_rectangle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_rectangle = length_of_rectangle * width_of_rectangle;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_rectangle << "sq" << i_am_a_mile_long_gone << endl;
			}
	}
}

void Triangle() {
	
	cout << "Triangle:" << endl << endl;
	
	double area_of_triangle, height_of_triangle, base_of_triangle;
	
	cout << "Please enter the base > "; cin >> base_of_triangle;
	cout << endl;
	
	cout << "Please enter the height > "; cin >> height_of_triangle;
	cout << endl;

	cout << "Please select a unit of measurement > "; cin >> user_input_measurements;
	cout << endl;
	
	if(user_input_measurements == 1) {
		
		if(height_of_triangle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_triangle = (height_of_triangle * base_of_triangle) / 2;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_triangle << " sq" << i_am_an_inch << endl;
			}
	
	} else if(user_input_measurements == 2) {
		
		if(height_of_triangle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_triangle = (height_of_triangle * base_of_triangle) / 2;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_triangle << " sq" << i_am_a_foot << endl;
			}
	
	} else if(user_input_measurements == 3) {
		
		if(height_of_triangle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_triangle = (height_of_triangle * base_of_triangle) / 2;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_triangle << " sq" << i_am_a_yard << endl;
			}
	
	} else {
		
		if(height_of_triangle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_triangle = (height_of_triangle * base_of_triangle) / 2;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_triangle << " sq" << i_am_a_mile_long_gone << endl;
			}
	}
}

void Cirlce() {
	
	cout << "Circle:" << endl << endl;
	
	double area_of_circle, radius_of_circle;

	const double PI = 3.14;

	cout << "Please enter the radius > "; cin >> radius_of_circle;
	cout << endl;

	cout << "Please select a unit of measurement > "; cin >> user_input_measurements;
	cout << endl;
	
	if(user_input_measurements == 1) {
		
		if(radius_of_circle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_circle = PI * radius_of_circle * radius_of_circle;

				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_circle << "sq" << i_am_an_inch << endl;
			}
	
	} else if(user_input_measurements == 2) {
		
		if(radius_of_circle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_circle = PI * radius_of_circle * radius_of_circle;
				
				cout << setprecision(2) << fixed << showpoint;

				cout << "Area = " << area_of_circle << "sq" << i_am_a_foot << endl;
			}
	
	} else if(user_input_measurements == 3) {
		
		if(radius_of_circle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_circle = PI * radius_of_circle * radius_of_circle;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_circle << " sq" << i_am_a_yard << endl;
			}
	
	} else {
		
		if(radius_of_circle < 0) {
			
			cout << "Godspeed, you need help with your math skills my friend" << endl;
			
			} else {
				
				area_of_circle = PI * radius_of_circle * radius_of_circle;
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "Area = " << area_of_circle << " sq" << i_am_a_mile_long_gone << endl;
			}
	}
}

void Quit() {
	
	cout << "Thank you for using Architect Area Calculator..." << endl;
}

int main() {
	
	//Display
	cout << "Architect Area Calculator:" << endl;
	cout << "**************************" << endl;
	cout << "1." << i_am_a_rectangle << endl;
	cout << "2." << i_am_a_triangle<< endl;
	cout << "3." << i_am_a_circle << endl;
	cout << "4." << i_just_want_to_quit << endl << endl << endl << endl;
	
	int user_options = 4;
	bool isUserDone = true;
  bool isUserTryingAgain = true;
	char do_i_go_on;
	
	//Unit of measurement
	cout << "Unit of measurements:" << endl;
	cout << "*********************" << endl;
	cout << "1." << i_am_an_inch << endl;
	cout << "2." << i_am_a_foot<< endl;
	cout << "3." << i_am_a_yard << endl;
	cout << "4." << i_am_a_mile_long_gone << endl << endl << endl << endl;
	
	//Asking the user
	cout << "Please enter a menu item (1-4) > ";
	cin >> user_options;
	cout << endl;
	cout << endl;
	
	while (isUserDone) {
		
		switch (user_options) {
			
			case 1: if (user_options == 1) {
				Rectangle();
          
				cout << endl;
			  
				cout << "Do you wish to continue?" << endl;
				cout << "Select Y = yes or N = no" << endl;
				cout << "What is your answer > ";
				cin >> do_i_go_on;
			  
				cout << endl;
				
				if (do_i_go_on != 'Y' && do_i_go_on != 'y' && do_i_go_on != 'N' && do_i_go_on != 'n') {
					
					cout << endl;
				
					cout << "ERROR ALERT!! We have a code ID10T! Please contact your superior for further analysis on your mental well being. I repeat ERROR ALERT!! We have a code ID10T!" << endl;
				
					cout << endl;

					cout << "Select Y = yes or N = no";

					cout << "Do you want to try again? > ";
					cin >> do_i_go_on;
					
					} else if (do_i_go_on =='Y' || do_i_go_on == 'y') {
						
						cout << endl;
						
						cout << "Please enter a menu item (1-4) > ";
						cin >> user_options;
						cout << endl;
						cout << endl;
						
						} else if (do_i_go_on == 'N' || do_i_go_on == 'n') {
							
							cout << endl;
							
							cout << "Thanks for using my calculation feature for your architectural needs." << endl;
							
							isUserDone = false;
						}
						
						break;
			}
			
			case 2: if (user_options == 2) {
				
				Triangle();
				
				cout << endl;
				
				cout << "Do you wish to continue?" << endl;
				cout << "Select Y = yes or N = no" << endl;
				cout << "What is your answer > ";
				cin >> do_i_go_on;
			  
				cout << endl;
				
				if (do_i_go_on != 'Y' && do_i_go_on != 'y' && do_i_go_on != 'N' && do_i_go_on != 'n') {
					
					cout << endl;
					
					cout << "ERROR ALERT!! We have a code ID10T! Please contact your superior for further analysis on your mental well being. I repeat ERROR ALERT!! We have a code ID10T!" << endl;
					
					cout << endl;
					
					cout << "Do you wish to continue?" << endl;
					cout << "Select Y = yes or N = no" << endl;
					cout << "What is your answer > ";
					cin >> do_i_go_on;
					
					cout << endl;
					
					} else if (do_i_go_on =='Y' || do_i_go_on == 'y') {
						
						cout << endl;
						
						cout << "Please enter a menu item (1-4) > ";
						cin >> user_options;
						cout << endl;
						cout << endl;
						
						} else if (do_i_go_on == 'N' || do_i_go_on == 'n') {
							
							cout << endl;
							
							cout << "Thanks for using my calculation feature for your architectural needs." << endl;
							
							isUserDone = false;
						}
						break;
			}
			
			case 3: if (user_options == 3) {
				
				Cirlce();
				
				cout << endl;
				
				cout << "Do you wish to continue?" << endl;
				cout << "Select Y = yes or N = no" << endl;
				cout << "What is your answer > ";
				cin >> do_i_go_on;
				
				cout << endl;
				
				if (do_i_go_on != 'Y' && do_i_go_on != 'y' && do_i_go_on != 'N' && do_i_go_on != 'n') {
					
					cout << endl;
					
					cout << "ERROR ALERT!! We have a code ID10T! Please contact your superior for further analysis on your mental well being. I repeat ERROR ALERT!! We have a code ID10T!" << endl;
					
					cout << endl;
					
					cout << "Do you wish to continue?" << endl;
					cout << "Select Y = yes or N = no" << endl;
					cout << "What is your answer > ";
					cin >> do_i_go_on;
					
					cout << endl;
					
					} else if (do_i_go_on =='Y' || do_i_go_on == 'y') {
						
						cout << endl;
						
						cout << "Please enter a menu item (1-4) > ";
						cin >> user_options;
						cout << endl;
						cout << endl;
						
						} else if (do_i_go_on == 'N' || do_i_go_on == 'n') {
							
							cout << endl;
							cout << "Thanks for using my calculation feature for your architectural needs." << endl;
							isUserDone = false;
						}
						break;
			}
			
			case 4: if (user_options == 4) {
				
				Quit();
				
				break;
			}
			
			default:
			
			cout << "Seems like the problem exists between monitor and chair." << endl;
			
			cout << "Do you wish to continue?" << endl;
			cout << "Select Y = yes or N = no" << endl;
			cout << "What is your answer > ";
			cin >> do_i_go_on;
			
			cout << endl;
			
			while (isUserTryingAgain) {
				
				if (do_i_go_on != 'Y' && do_i_go_on != 'y' && do_i_go_on != 'N' && do_i_go_on != 'n') {
					
					cout << endl;
					
					cout << "ERROR ALERT!! We have a code ID10T! Please contact your superior for further analysis on your mental well being. I repeat ERROR ALERT!! We have a code ID10T!" << endl;
					
					cout << endl;
					cout << "Do you wish to continue?" << endl;
					cout << "Select Y = yes or N = no" << endl;
					cout << "What is your answer > ";
					cin >> do_i_go_on;
				
					cout << endl;
					
					} else if (do_i_go_on =='Y' || do_i_go_on == 'y') {
						
						cout << endl;
						cout << "Please enter a menu item (1-4) > ";
						cin >> user_options;
						cout << endl;
						
						} else if (do_i_go_on == 'N' || do_i_go_on == 'n') {
							
							cout << endl;
				
							cout << "Thanks for using my calculation feature for your architectural needs." << endl;
							isUserDone = false;
							isUserTryingAgain = false;
						}
						return 0;
			}
		  }
		}
  }