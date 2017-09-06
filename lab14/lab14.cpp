//Created By: Alex Moxon
//Created On: 09/05/2017
/*Taking users input of cents and converting it to quarters, dimes, nickels, pennies
Then outputing the total amount given back after the tax. */

#include<iostream>
using namespace std;
int quarters = 25;
int dimes = 10;
int nickels = 5;
int pennies = 1;
int cents = 0.0;
double tax = 10.9;
double tax1 = 0.0;
double tax2 = 0.0;
double taxedAmount = 0.0;
int taxedFinal = 0.0;
int taxedFinal1 = 0.0;
int taxedFinal2 = 0.0;
double coin1 = 0.0;
double coin2 = 0.0;
double coin3 = 0.0;
double coin4 = 0.0;

 
 int main () {
  
     cout << "Please insert amount of money: " << endl;
     cin >> cents;                       // user enters amount of cents
     cout << "You have entered: " << cents << " cents." << endl;
     
coin1 = cents / quarters;                 // Divide input by 25 to get amount of cents
coin2 = (cents % quarters) / dimes;       // Modul quarters then divide left over by dimes
coin3 = ((cents % quarters) % dimes) / nickels;
coin4 = (((cents % quarters) % dimes) % nickels) / pennies;

cout << "That was " << coin1 << " quarters, " << coin2 << " dimes, " << coin3 
<< " nickels, and " << coin4 << " pennies." << endl;


taxedAmount = cents / tax;               //Produces the amount taken away due to tax
taxedFinal = cents - taxedAmount;        //Actual taxed amount

tax1 = cents / 100;                      //Divide cents by 100 (like coin1)
tax2 = cents % 100;                      //Modul the remainder when 100 goes into it

taxedFinal1 = taxedFinal / 100;
taxedFinal2 = taxedFinal % 100;


cout << "The total is $" << tax1 << "." << tax2 << " After the fee you get $";
cout << taxedFinal1 <<"." << taxedFinal2 << " in cash." << endl;

return 0;

 }