//Created By: Alex Moxon
//Created On: 09/25/2017
/*Creating two functions within a program, that takes a users two inputs
and swaps them twice. Then the program outputs a random number between the
two numbers given.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int RandomNumberSwap(int &min, int &max){
    swap(min, max);
}

int RandomNumber(int min, int max){
    swap(min, max);
    srand(time(0));
    int FinalNum = (rand() % max) + min;
    cout << "A random number between " << min << " and " << max << " is " << FinalNum;
}

int main()
{
    int min;
    int max;
    int FinalNum;
    
    cout << "Enter your smaller number first: ";
    cin >> min;
   
    cout << "Enter your larger number: ";
    cin >> max;
    
    RandomNumberSwap(min,max);
    RandomNumber(min,max);
    
   return 0;
}