//Created By: Alex Moxon
//Created On: 09/14/2017
/*Takes user input about hours worked/hourly pay and converts that
to a pay stub factoring in insurance costs and other take aways.*/

#include<iostream>
#include<string>
using namespace std;

struct WeeklyPay{ //below are all objects of my struct
    string name;
    double insuranceCost;
    double hoursWorked;
    double hourlyPay;
    double grossPay;
    double netPay;
    double reimbursement;
    double totalPay;
    double startOdometer;
    double endOdometer;
    double finalOdometer;
      };
    
int main() 
{
    
 WeeklyPay personA; 
 const double tax = .83; //variables are const because they should never change
 const double wagePerMile = .35;
 
 cout << "Please enter your first and last name: "  << endl; // taking in user data to use in calculations
 getline(cin, personA.name);
 
 cout << "Please enter the amount of hours worked: " << endl;
 cin >> personA.hoursWorked;   
 
 cout << "Please enter your hourly pay: " << endl;
 cin >> personA.hourlyPay;
 
 cout << "Please enter your insurance cost: " << endl;
 cin >> personA.insuranceCost;
 
 cout << "Please enter your starting odometer reading: " << endl;
 cin >> personA.startOdometer;
 
 cout << "Please enter your ending odometer reading: " << endl;
 cin >> personA.endOdometer;


 personA.finalOdometer = (personA.endOdometer - personA.startOdometer) * wagePerMile; // calculations
 personA.reimbursement = personA.finalOdometer;
 personA.grossPay = (personA.hourlyPay * personA.hoursWorked) + personA.reimbursement;
 personA.netPay = (personA.grossPay * tax) - personA.insuranceCost;
 personA.totalPay = personA.netPay + personA.reimbursement;

 cout << "EMPLOYEE NAME " << "HOURS " << "HOURLY-PAY " << "GROSS-PAY " << "NET-PAY " 
 << "REIMBURSEMENT " << "TOTAL-PAY " << endl;
 
 cout << "____________________________________________________________________________" << endl;
 
 cout << personA.name << "  " << personA.hoursWorked << "    " <<
 personA.hourlyPay << "      " << "$" << personA.grossPay << "   " << "$" 
 << personA.netPay << "    " << "$" << personA.reimbursement << "     " << "$" 
 << personA.totalPay << endl;
  
    return 0;
}
