//Antoine Gustave
//Output the prices of Gunter's outlet shop
//Date: 8/24/19
//Class: Tuesday 6:30pm-9pm

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

  cout <<"***************************************"<< endl;
  cout <<"**        //\\                        **"<< endl;
  cout <<"**       //  \\  //\\                  **" << endl;
  cout <<"**      //    \\//  \\      //\\        **"<<endl;
  cout <<"**     //           \\    //  \\       **"<<endl;
  cout <<"**    //             \\  //    \\      **"<<endl;
  cout <<"**   //               \\//      \\     **"<<endl;
  cout <<"***************************************"<<endl;
  cout <<"** Welcome to Gunter's Mountain Shop **"<<endl;
  cout <<"***************************************"<<endl <<endl;

  //Constance price of the items
  const float overprice_boots = 59.99;
  const float fleece_not_my_style = 10.50;
  const float omg_snow = 12.25;
  const float feeling_some_traction = 14.99;

  //Total and subtotal of the price
  double total_price, sub_total_boots, sub_total_fleece, sub_total_snow, sub_total_traction;

  //User input
  int cust_boots, cust_fleece, cust_snow, cust_traction;

  //Display
  cout << endl;
  cout <<"* * * * * * * * * * ============================================="<<endl <<endl;
  cout <<" * * * * * * * * *  ============================================="<<endl <<endl;
  cout <<"* * * * * * * * * * ============================================="<<endl <<endl;
  cout <<" * * * * * * * * * * ============================================"<<endl <<endl;
  cout <<"* * * * * * * * * * ============================================="<<endl <<endl;
  cout <<"================================================================="<<endl <<endl;
  cout <<"================================================================="<<endl <<endl;
  cout <<"================================================================="<<endl <<endl;
  cout <<"================================================================="<<endl <<endl;
  cout <<"================================================================="<<endl <<endl;
  cout <<"================================================================="<<endl <<endl;
  cout <<"================================================================="<<endl <<endl;
  cout <<"================================================================="<<endl <<endl;

  //Questing the user sanity
  cout << "How many Hunter Climbing Boots would you to purchase? "; cin >> cust_boots;
  cout << "How many Fleece Pullovers would you to purchase? "; cin >> cust_fleece;
  cout << "How many Snow Gaiters would you to purchase? "; cin >> cust_snow;
  cout << "How many Traction Cleats would you to purchase? "; cin >> cust_traction;
  cout << endl << endl;

  cout << setprecision(2) << fixed << showpoint;


  //Calculation process
  sub_total_boots = (overprice_boots * cust_boots);
  sub_total_fleece = (fleece_not_my_style * cust_fleece);
  sub_total_snow = (omg_snow * cust_snow);
  sub_total_traction = (feeling_some_traction * cust_traction);

  total_price = sub_total_boots + sub_total_fleece + sub_total_snow + sub_total_traction;

  //Store Info
  cout <<"***************************************************************" << endl;
  cout <<"|Sale Items|                |Sale Price|          |Total Price|" << endl;
  cout <<"***************************************************************" << endl;

  cout << "Hunter Climbing Boots        " "$"<< overprice_boots << setw(23) << "Total = $" << sub_total_boots << endl;
  cout << "Fleece Pullovers            " "$" << fleece_not_my_style << setw(23) << "Total = $" << sub_total_fleece << endl;
  cout << "Snow Gaiters                " "$" << omg_snow << setw(23) << "Total = $" << sub_total_snow << endl;
  cout << "Traction Cleats             " "$" << feeling_some_traction << setw(23) << "Total = $" << sub_total_traction << endl;
  cout <<"***************************************************************" << endl;
  cout << setw(56) << "Total: $" << total_price << endl;

  return 0;
}