/**
 *    @file: wageplan.cc
 *  @author: Hunter Stout
 *    @date: 9/17/21
 *   @brief: Salaries, if else practice.
 *  
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
  double sales; //User enters weekly sales
  double wage1; //Wage for 40 hours (pay per hour).
  double com1; // 10% Commission.
  double com2; // 15% Commission.
  double pay1; //Pay per hour + Commission.
  double pay2; //Pay per hour + Commission.

    //Main input (weekly sales).
    cout << fixed << setprecision(2);
    cout << "Please Enter the weekly sales amount: " << endl;
    cin >> sales;

        //Main backbone (check to make sure its a real weekly salary).
        if (sales > 999 && sales < 50001) {

        //Math behind pay1 & pay2.
        wage1 = 220;
        com1 = sales * 0.10;
        com2 = sales * 0.15;
        pay1 = wage1 + com1;
        pay2 = com2;

        //Display for weekly sales, pay1, & pay2
        cout << "Amount of weekly sales: $" << sales << endl;
        cout << "Plan 1 pays: $" << pay1 << endl;
        cout << "Plan 2 pays: $" << pay2 << endl;

            //Secondary backbone (check to see if plan1 or plan2 is better paying).
            if (pay1 > pay2) {
                cout << "Plan 1 is better!" << endl;
            }
            else {
                cout << "Plan 2 is better!" << endl;
            }
        }
        //End of main backbone (display for input that is not a real salary).
        else {
            cout << "Sales must be between $1000-$50,000. Try again!" << endl;
        }   

  return (0);
}
