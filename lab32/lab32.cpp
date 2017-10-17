//Created By: Alex Moxon
//Created On: 10/12/2017
/*A program that calculates income tax and amount oweed or to be refunded based on the variables given
by said user. Program determines deductions based on being single or married, then calculates tax for said input.*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main() {
    
    //Variables
    string nameGiven = "";
    char marriageStatus = ' ';
    double grossIncome = 0.0;
    double taxWithheld = 0.0;
    double taxOwed = 0.0;
    double refund = 0.0;
    double wageDeduction = 0.0;
    const double singleDeduction = 10400.0;
    const double marriedDeduction = 16750.0;
    
    //User Input 
    cout << "Enter Name: ";
    getline(cin, nameGiven);
    
    cout << "Single or Married (s or m): ";
    cin >> marriageStatus;
    
    cout << "Gross Income: ";
    cin >> grossIncome;
    
    cout << "Amount Withheld: ";
    cin >> taxWithheld;
    cout << endl;
    
    //if - else if statement to calculate tax for singles
    if (marriageStatus == 's' && grossIncome <= 9325.0) {
        
        taxOwed = grossIncome * 0.10;
    }
    else if (marriageStatus == 's' && grossIncome >= 9326.0 && grossIncome <= 37950.0) {
        
        taxOwed = 932.50 + ((grossIncome - 9325.0) * 0.15);
    }
    else if (marriageStatus == 's' && grossIncome >= 37951.0 && grossIncome <= 91900.0) {
        
        taxOwed = 5226.25 + ((grossIncome - 37950.0) * 0.25);
    }
    else if (marriageStatus == 's' && grossIncome >= 91901.0 && grossIncome <= 191650.0) {
        
        taxOwed = 18713.75 + ((grossIncome - 91900.0) * 0.28);
    }
    else if (marriageStatus == 's' && grossIncome >= 191651.0 && grossIncome <= 416700.0) {
        
        taxOwed = 46643.75 + ((grossIncome - 191650.0) * 0.33);
    }
    else if (marriageStatus == 's' && grossIncome >= 416700.0) {
        
        taxOwed = 46643.75 + ((grossIncome - 191650.0) * 0.33);
    }
    
    
    //if - else if statement to calculate tax for married couples
    if (marriageStatus == 'm' && grossIncome <= 18650.0) {
        
        taxOwed = grossIncome * 0.10;
    }
    else if (marriageStatus == 'm' && grossIncome >= 18650 && grossIncome <= 75900.0) {
        
        taxOwed = 1865.0 + ((grossIncome - 18650.0) * 0.15);
    }
    else if (marriageStatus == 'm' && grossIncome >= 75901.0 && grossIncome <= 153100.0) {
        
        taxOwed = 10452.50 + ((grossIncome - 75900.0) * 0.25);
    }
    else if (marriageStatus == 'm' && grossIncome >= 153101.0 && grossIncome <= 233350.0) {
        
        taxOwed = 29752.50 + ((grossIncome - 153100.0) * 0.28);
    }
    else if (marriageStatus == 'm' && grossIncome >= 233350.0 && grossIncome <= 416700.0) {
        
        taxOwed = 52222.50 + ((grossIncome - 233350.0) * 0.33);
    }     
    else if (marriageStatus == 'm' && grossIncome >= 416700.0){
        
        taxOwed = 112728.0 + ((grossIncome - 470700.0)) * 0.396;
    }
    
    //Switch statement that assigns deductions based on being either single or married
    switch (marriageStatus) {
        
        case 's':
        case 'S':
        wageDeduction = singleDeduction;
        break;
        
        case 'm':
        case 'M':
        wageDeduction = marriedDeduction;
        break;
        
        default:
        cout << "Please restart and follow the proper guidelines for your given civil status." << endl;
        break;
    }
    
    refund = wageDeduction - taxOwed; //Calculates total amount that should be refunded
    
    //If else statement that calculates if the tax is larger than the withholdings, refund is set to 0
    if (taxOwed > taxWithheld) {
        refund = 0.0;
    }
    else {
        refund = refund;
    }
    //printing receipt
    cout << "Name: " << nameGiven << endl;
    cout << "Total Gross Adjusted Income: " << grossIncome << endl;
    cout << "Total Tax Owed: " << taxOwed << endl;
    cout << nameGiven << " is entitle to a refund of: $" << refund << endl;
    
    return 0;
}

/* 

Enter Name: Joe Vandal
Single or Married (s or m): s
Gross Income: 12100
Amount Withheld: 250

Name: Joe Vandal
Total Gross Adjusted Income: 12100
Total Tax Owed: 1348.75
Joe Vandal is entitle to a refund of: $0


Enter Name: Alfonso Haynes
Single or Married (s or m): m
Gross Income: 32351
Amount Withheld: 3192

Name: Alfonso Haynes
Total Gross Adjusted Income: 32351
Total Tax Owed: 3920.15
Alfonso Haynes is entitle to a refund of: $0


Enter Name: Bridget Rowe
Single or Married (s or m): s
Gross Income: 88229
Amount Withheld: 12057

Name: Bridget Rowe
Total Gross Adjusted Income: 88229
Total Tax Owed: 17796
Bridget Rowe is entitle to a refund of: $0


Enter Name: Wendy Joseph
Single or Married (s or m): m
Gross Income: 73291
Amount Withheld: 6972

Name: Wendy Joseph
Total Gross Adjusted Income: 73291
Total Tax Owed: 10061.1
Wendy Joseph is entitle to a refund of: $0

*/