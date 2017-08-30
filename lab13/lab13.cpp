#include <iostream>
using namespace std;

int main() {
    int gain = 0; //number people born a year
    int years = 0; //number user enters
    int currentYear = 2017; //current years
    int currentPopulation = 325763943;
    int futurePopulation = 0; //ouput of estimated population

    cout << "Enter a number of years in the future, for an estimated population of the United States: ";
    cin >> years;
    currentYear = currentYear + years; //year of estimated population
    gain = (316224000 / 12) * years;   // 316224000 (# of seconds in a year) / 12 (seconds for net gain of 1 person) 
    futurePopulation = currentPopulation + gain; //adding of estimated population
    cout << "In the year " << currentYear << ", the population will be " << futurePopulation << " in the United States." << endl;
    return 0;
}