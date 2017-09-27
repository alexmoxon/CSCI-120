//Created By: Alex Moxon
//Created On: 09/25/2017
/*Creating two functions within a program, that takes a users two inputs
and swaps them twice. Then the program outputs a random number between the
two numbers given.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int RandomNumberSwap(int &min, int &max){ //Swaps min and max input. input: min, max . output: max, min.
    swap(min, max);
}

int RandomNumber(int min, int max){ //Swaps back max and min and prints random num between the two. input: max, min
    swap(min, max);                 //Output: A random number between (max) and (min) is (randomnum).
    srand(time(0));
    int FinalNum = (rand() % max) + min;
    cout << "A random number between " << min << " and " << max << " is " << FinalNum; //Output
}

int main()
{
    int min;
    int max;
    int FinalNum;
    
    cout << "Enter your smaller number first: "; // Takes user input
    cin >> min;
   
    cout << "Enter your larger number: ";
    cin >> max;
    
    RandomNumberSwap(min,max); //runs swap
    RandomNumber(min,max);    // runs swap again, then prints the output & random number.
    
   return 0;
}

/*
Enter your smaller number first: 1
Enter your larger number: 10
A random number between 1 and 10 is 3

Enter your smaller number first: 5
Enter your larger number: 82
A random number between 5 and 82 is 8

Enter your smaller number first: 22
Enter your larger number: 73
A random number between 22 and 73 is 50
*/