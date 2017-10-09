//Created By: Alex Moxon
//Created On: 10/4/2017
/* Creating a class that takes in an item price and uses five different locations to 
calculate the tax on said item. Each location has a different state, county, city, and 
special tax. which is each tax is seperatly outputted on the screen and the user
is then given a total.*/

#include<iostream>
#include<cmath>
using namespace std;

class Item { // Class which takes gets a city and it's taxes (state,county,city,special) and outputs that information for the user (given an amount input).
    
    public: //Public functions
    
    void SetState(double stateToSet); //Mutator
    double GetState() const; //Accessor
    
    void SetCounty(double countyToSet); //Mutator
    double GetCounty() const; //Accessor
    
    void SetCity(double cityToSet); //Mutator
    double GetCity() const; //Accessor
    
    void SetSpecial(double specialToSet); //Mutator
    double GetSpecial() const; //Accessor
    
    void SetAmount(double amountToSet); //Mutator
    double GetAmount() const; //Accessor
    
    void SetCityName(string cityNameToSet); //Mutator
    string GetCityName() const; //Accessor
    
    
    void Print() { //Prints out how much money will be sent to state, county, city, and special based on item price.
        cout << "******************************************" << endl;
        cout << "You bought this item in: " << GetCityName() << endl; //Gets city name
        cout << "Price of Item: " << GetAmount() << endl; // Gets amount entered in by user
        cout << "State Tax: "  << round(GetState() * 100.00) / 100.00 << endl; //Calculates state tax
        cout << "County Tax: " << round(GetCounty() * 100.00) / 100.00 << endl; //Calculates county tax
        cout << "City Tax: " << round(GetCity() * 100.00) / 100.00 << endl; //Calculates city tax
        cout << "Special Tax: " << round(GetSpecial() * 100.00) / 100.00 << endl; //Calculates special tax
        cout << "Total Price: " << round((GetAmount() + GetState() + GetCounty() + GetCity() + GetSpecial()) * 100.00) / 100.00 << endl; //Calculates total after all taxes are added on to the original input.
        cout << "******************************************" << endl;
        }
        
    private: //Private variables
    
    double state_;
    double county_;
    double city_;
    double special_;
    double amount_;
    string cityName_;

};


void Item::SetCityName(string cityNameToSet) { //Sets variable
    
    cityName_ = cityNameToSet;
}

string Item::GetCityName() const { //Gets variable
    
    return cityName_;
}


void Item::SetAmount(double amountToSet) {
    
    amount_ = amountToSet;
}

double Item::GetAmount() const {
    
    return amount_;
}

void Item::SetState(double stateToSet) {
    
    state_ = amount_ * stateToSet;
}

double Item::GetState() const {
    
    return state_;
}

void Item::SetCounty(double countyToSet) {
    
    county_ = amount_ * countyToSet;
}

double Item::GetCounty() const {
    
    return county_;
}


void Item::SetCity(double cityToSet) {
    
    city_ = amount_ * cityToSet;
}

double Item::GetCity() const {
    
    return city_;
    
}

void Item::SetSpecial(double specialToSet) {
    
    special_ = amount_ * specialToSet;

}

double Item::GetSpecial() const {
    
    return special_;
}



int main() { //Main function that gets user input of amount before tax
    double item_ = 0.00;
    
    Item chico; //Objects within the Item class
    Item paradise;
    Item sacramento;
    Item vegas;
    Item pheonix;
    
    
    cout << "Enter price of item: ";
    cin >> item_; //Gets amount from user
    chico.SetAmount(item_);//Sets that amount to all cities
    paradise.SetAmount(item_);
    sacramento.SetAmount(item_);
    vegas.SetAmount(item_);
    pheonix.SetAmount(item_);
    
    chico.SetState(0.06);//Sets state tax at 6%
    chico.SetCounty(0.0025);//Sets county tax at 2.5%
    chico.SetCity(0.00); //Sets city tax at 0%
    chico.SetSpecial(0.01); //Sets special tax at 1%
    chico.SetCityName("Chico Ca."); //Sets city name
    
    paradise.SetState(0.06);
    paradise.SetCounty(0.0025);
    paradise.SetCity(0.005);
    paradise.SetSpecial(0.01);
    paradise.SetCityName("Paradise Ca.");
    
    sacramento.SetState(0.06);
    sacramento.SetCounty(0.0025);
    sacramento.SetCity(0.005);
    sacramento.SetSpecial(0.015);
    sacramento.SetCityName("Sacramento Ca.");
    
    vegas.SetState(0.046);
    vegas.SetCounty(0.035);
    vegas.SetCity(0.00);
    vegas.SetSpecial(0.00);
    vegas.SetCityName("Las Vegas Nv.");
    
    pheonix.SetState(0.056);
    pheonix.SetCounty(0.007);
    pheonix.SetCity(0.023);
    pheonix.SetSpecial(0.00);
    pheonix.SetCityName("Pheonix Az.");
    
    
    //Calling the print function
    chico.Print();
    paradise.Print();
    sacramento.Print();
    vegas.Print();
    pheonix.Print();

    return 0;
}
/*
Enter price of item: 15.00
------------------------------------------
You bought this item in: Chico Ca.
Price of Item: 15
State Tax: 0.9
County Tax: 0.04
City Tax: 0
Special Tax: 0.15
Total Price: 16.09
------------------------------------------
------------------------------------------
You bought this item in: Paradise Ca.
Price of Item: 15
State Tax: 0.9
County Tax: 0.04
City Tax: 0.08
Special Tax: 0.15
Total Price: 16.16
------------------------------------------
------------------------------------------
You bought this item in: Sacramento Ca.
Price of Item: 15
State Tax: 0.9
County Tax: 0.04
City Tax: 0.08
Special Tax: 0.22
Total Price: 16.24
------------------------------------------
------------------------------------------
You bought this item in: Las Vegas Nv.
Price of Item: 15
State Tax: 0.69
County Tax: 0.53
City Tax: 0
Special Tax: 0
Total Price: 16.22
------------------------------------------
------------------------------------------
You bought this item in: Pheonix Az.
Price of Item: 15
State Tax: 0.84
County Tax: 0.11
City Tax: 0.35
Special Tax: 0
Total Price: 16.29
------------------------------------------

*/