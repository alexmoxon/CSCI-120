#include <iostream>
using namespace std;

int main() {
    int gain = 0;
    int years = 0;
    int currentYear = 2017;
    int currentPopulation = 325763943;
    int futurePopulation = 0;

    cout << "Enter a number of years in the future, for an estimated population of the United States: ";
    cin >> years;
    currentYear = currentYear + years;
    gain = (31622400 / 12) * years;   // 31622400 (# of seconds in a year) / 12 (seconds for net gain of 1 person) 
    futurePopulation = currentPopulation + gain;
    cout << "In the year " << currentYear << ", the population will be " << futurePopulation << " in the United States." << endl;
    return 0;
}