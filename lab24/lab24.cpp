//Created By: Alex Moxon
//Created On: 10/2/2017
/*Creating three functions: One is a random number generator that accepts two numbers
and swaps the values then outputs a number between the two. The second, accepts pounds and
returns the kilograms equivalent. The third, accepts kilograms and returns the pounds equivalent.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int RandomNumber(int min, int max){ //Swaps back max and min and prints random num between the two. input: max, min
    swap(min, max); 
    srand(time(0));
   int RandomNum = (rand() % min ) + max;
   return RandomNum; //Output
}

double PoundsToKilograms(int pounds){ //Multiplies the random number by PoundConversion to get kilograms
    const double poundConversion = 2.2046;
    double kilograms = 0.0;
    int conversion = pounds;
    kilograms = conversion * poundConversion;
    return kilograms;
    
}
double KilogramsToPounds(int kilo){ //Divides Kilograms by Conversion to get pounds
    const double KiloConversion = 2.2046;
    double lbs = 0.0;
    int conv = kilo;
    lbs = conv / KiloConversion;
    return lbs;
}
int main()
{
    double min = 0.0; //User input variables for random number
    double max = 0.0;
    cout << "Enter your smaller number first: "; // Takes user input
    cin >> min;
   
    cout << "Enter your larger number: ";
    cin >> max;
    
    cout << "Your random number is: " << RandomNumber(min, max) << endl; //Output 
    cout << RandomNumber(min,max) << " pounds is equivalent to " << PoundsToKilograms(RandomNumber(min,max)) << " kilograms"; // Runs swap then outputs random number in kilograms
    cout << endl;
    cout << PoundsToKilograms(RandomNumber(min,max)) << " kilograms is equivalent to " << RandomNumber(min, max) << " pounds";
   return 0;
}
    
    
/*
Enter your smaller number first: 2
Enter your larger number: 10
Your random number is: 9
9 pounds is equivalent to 19.8414 kilograms
19.8414 kilograms is equivalent to 9 pounds

Enter your smaller number first: 50
Enter your larger number: 100
Your random number is: 55
55 pounds is equivalent to 121.253 kilograms
121.253 kilograms is equivalent to 55 pounds

Enter your smaller number first: 100
Enter your larger number: 200
Your random number is: 119
119 pounds is equivalent to 262.347 kilograms
262.347 kilograms is equivalent to 119 pounds



*/