//Created By: Alex Moxon
//Created On: 09/12/2017
/* Creating a struct for holding a stock portfolio, that
takes the users input and stores it in an object for later use.*/

#include<iostream>
#include<string>
using namespace std;
 
 struct Portfolio{ //Variables that take a difference input in every object
  string name;
  string sector;
  double sharePrice;
  double numberShares;
  double totalValue;
  double totalPortfolio;
 };
 
 int main()
 {
 Portfolio stockA; //creating an object for each stock
 
  cout << "Enter Stock Name: "; //User input stored in distinct object
  cin >> stockA.name;
  
  cout << "Enter Sector: ";
  cin >> stockA.sector;
  
  cout << "Enter Current Value of Shares: ";
  cin >> stockA.sharePrice;
  
  cout << "Enter Number of Shares: ";
  cin >> stockA.numberShares;
  
  cout << endl;
  
  stockA.totalValue = static_cast<double>(stockA.numberShares * stockA.sharePrice);
  stockA.totalPortfolio = stockA.totalValue; //Adding total value of stock to total portfolio value
  
   cout << "Name: "<<stockA.name << endl;
   cout << "Sector: "<<stockA.sector << endl;
   cout << "Share Price: "<<stockA.sharePrice << endl;
   cout << "Number of Shares: "<<stockA.numberShares << endl;
   cout << "Total Value: " << stockA.totalValue << endl;  
   cout << "Total Portfolio: $" << stockA.totalPortfolio << endl;
   cout << endl;
   
  Portfolio stockB; //Copy of first object, just with different user input
   

  cout << "Enter Stock Name: ";
  cin >> stockB.name;
  
  cout << "Enter Sector: ";
  cin >> stockB.sector;
  
  cout << "Enter Current Value of Shares: ";
  cin >> stockB.sharePrice;
  
  cout << "Enter Number of Shares: ";
  cin >> stockB.numberShares;
  
  cout << endl;
  
  stockB.totalValue = static_cast<double>(stockB.numberShares * stockB.sharePrice);
  stockB.totalPortfolio = stockA.totalPortfolio + stockB.totalValue;
  
   cout << "Name: "<<stockB.name << endl;
   cout << "Sector: "<<stockB.sector << endl;
   cout << "Share Price: "<<stockB.sharePrice << endl;
   cout << "Number of Shares: "<<stockB.numberShares << endl;
   cout << "Total Value: " << stockB.totalValue << endl;  
   cout << "Total Portfolio: $" << stockB.totalPortfolio << endl;
   cout << endl;
 Portfolio stockC;
    
  cout << "Enter Stock Name: ";
  cin >> stockC.name;
  
  cout << "Enter Sector: ";
  cin >> stockC.sector;
  
  cout << "Enter Current Value of Shares: ";
  cin >> stockC.sharePrice;
  
  cout << "Enter Number of Shares: ";
  cin >> stockC.numberShares;
  
  cout << endl;
  
  stockC.totalValue = static_cast<double>(stockC.numberShares * stockC.sharePrice);
  stockC.totalPortfolio = stockB.totalPortfolio + stockC.totalValue;
  
   cout << "Name: "<<stockC.name << endl;
   cout << "Sector: "<<stockC.sector << endl;
   cout << "Share Price: "<<stockC.sharePrice << endl;
   cout << "Number of Shares: "<<stockC.numberShares << endl;
   cout << "Total Value: " << stockC.totalValue << endl;  
   cout << "Total Portfolio: $" << stockC.totalPortfolio << endl;  
   cout << endl;
   
 Portfolio stockD;
    
  cout << "Enter Stock Name: ";
  cin >> stockD.name;
  
  cout << "Enter Sector: ";
  cin >> stockD.sector;
  
  cout << "Enter Current Value of Shares: ";
  cin >> stockD.sharePrice;
  
  cout << "Enter Number of Shares: ";
  cin >> stockD.numberShares;
  
  cout << endl;
  
  stockD.totalValue = static_cast<double>(stockD.numberShares * stockD.sharePrice);
  stockD.totalPortfolio = stockC.totalPortfolio + stockD.totalValue;
  
   cout << "Name: "<<stockD.name << endl;
   cout << "Sector: "<<stockD.sector << endl;
   cout << "Share Price: "<<stockD.sharePrice << endl;
   cout << "Number of Shares: "<<stockD.numberShares << endl;
   cout << "Total Value: " << stockD.totalValue << endl;  
   cout << "Total Portfolio: $" << stockD.totalPortfolio << endl;    
   cout << endl;
   
  Portfolio stockE;
    
  cout << "Enter Stock Name: ";
  cin >> stockE.name;
  
  cout << "Enter Sector: ";
  cin >> stockE.sector;
  
  cout << "Enter Current Value of Shares: ";
  cin >> stockE.sharePrice;
  
  cout << "Enter Number of Shares: ";
  cin >> stockE.numberShares;
  
  cout << endl;
  
  stockE.totalValue = static_cast<double>(stockE.numberShares * stockE.sharePrice);
  stockE.totalPortfolio = stockD.totalPortfolio + stockE.totalValue;
  
   cout << "Name: "<<stockE.name << endl;
   cout << "Sector: "<<stockE.sector << endl;
   cout << "Share Price: "<<stockE.sharePrice << endl;
   cout << "Number of Shares: "<<stockE.numberShares << endl;
   cout << "Total Value: " << stockE.totalValue << endl;  
   cout << "Total Portfolio Value: $" << stockE.totalPortfolio << endl;  //Outputs the total amount of all stocks
   
     
     return 0;
     
 }
 
/* 
Enter Stock Name: FordM
Enter Sector: A
Enter Current Value of Shares: 18.76
Enter Number of Shares: 87

Name: FordM
Sector: A
Share Price: 18.76
Number of Shares: 87
Total Value: 1632.12
Total Portfolio: $1632.12

Enter Stock Name: Albertsn
Enter Sector: C
Enter Current Value of Shares: 34.39
Enter Number of Shares: 542

Name: Albertsn
Sector: C
Share Price: 34.39
Number of Shares: 542
Total Value: 18639.4
Total Portfolio: $20271.5

Enter Stock Name: APPL
Enter Sector: T
Enter Current Value of Shares: 145.91
Enter Number of Shares: 5

Name: APPL
Sector: T
Share Price: 145.91
Number of Shares: 5
Total Value: 729.55
Total Portfolio: $21001

Enter Stock Name: TSLA
Enter Sector: A
Enter Current Value of Shares: 375.64
Enter Number of Shares: 50

Name: TSLA
Sector: A
Share Price: 375.64
Number of Shares: 50
Total Value: 18782
Total Portfolio: $39783.1

Enter Stock Name: WFC
Enter Sector: F
Enter Current Value of Shares: 53.02
Enter Number of Shares: 1368

Name: WFC
Sector: F
Share Price: 53.02
Number of Shares: 1368
Total Value: 72531.4
Total Portfolio Value: $112314
*/ 
