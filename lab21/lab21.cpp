//Created By: Alex Moxon
//Created On: 09/19/2017
/*Taking temperature & windspeed from user. Then implementing those numbers 
into the new and old windchill equations and outputting the results.*/

#include<iostream>
#include<cmath>
using namespace std;


int main(){
    
    double temperature; //All variables are doubles because we're dealing with precise numbers
    double windSpeed;
    double oldStyleWindChill;
    double newStyleWindChill;
    double difference;

    cout << "Please enter the current temperature: " << endl;
    cin >> temperature;
    
    cout << "Please enter the current windspeed: " << endl;
    cin >> windSpeed;
  
    
    oldStyleWindChill = 0.081 * (3.71 * sqrt(windSpeed) + 5.81 - 0.25 * windSpeed) //Equation for the old style of calculating windchill
     * (temperature - 91.4) + 91.4;
    
    
    newStyleWindChill = 35.74 + 0.6215 * temperature - 35.75 * pow(windSpeed, 0.16) //Equation for the new style of calculating windchill
    + 0.4275 * temperature * pow(windSpeed, 0.16);
    
    difference = newStyleWindChill - oldStyleWindChill; //Calculating difference between the two equations
    
    cout << "Wind Speed: " << windSpeed << endl; //Output 
    cout << "Old Formula Wind Chill: " << oldStyleWindChill << endl;
    cout << "New Formula Wind Chill: " << newStyleWindChill << endl;
    cout << "Difference in Wind Chill: " << difference << endl;
    
    return 0;
}
/*
Wind Speed: 4
Old Formula Wind Chill: 30.5753
New Formula Wind Chill: 25.767
Difference in Wind Chill: -4.8083

Wind Speed: 10
Old Formula Wind Chill: 27.8601
New Formula Wind Chill: 32.713
Difference in Wind Chill: 4.85286

Wind Speed: 2
Old Formula Wind Chill: 98.7538
New Formula Wind Chill: 105.711
Difference in Wind Chill: 6.95719
*/