//Created By: Alex Moxon
//Created On: 10/16/2017
/*Creating a guessing game between 1 - 50.  The program reads in a value between 1-50, the program then
generates a random number between 1-50 and compares the two. If the number is below or above the random number
it asks you to guess again. Once the user guesses the correct number, the program finishes.*/

#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

//Function that generates a random number between 1-50
int RandomNumber() {
    
    int randomNum = 0;
    srand(time(0));
    randomNum = (rand() % 50 ) + 1;
    return randomNum;
}

int main() {
    //Variables
    int num = 0;
    int randomNum = RandomNumber();
    int i = 0;
    
    //User input
    cout << "Enter a Number between 1 - 50: ";
    cin >> num;

    //For loop that counts down from 5 to 0
    for (i = 5; i >= 0; --i) {
        cout << i << endl;
    }
    
    /*While loop that takes in user guessed number and compares it to the random number generated.
    If guessed number is too low or too high, loop asks for another number input. Once number is guessed
    right, loop terminates.*/
    while(num != randomNum) {
        
        if (num >= 1 && num <= 50) {
            
            if (num < randomNum) {
                cout << "Too Low!" << endl;
                cout << "Please enter another number: ";
                cin >> num;
            }
            
            else if (num > randomNum) {
                cout << "Too High!" << endl;
                cout << "Please enter another number: ";
                cin >> num;
            }
        }
            else {
                cout << "Please re-enter number: ";
                cin >> num;
            }
        
    }
cout << "Just Right!"; //Prints once number guessed is same as random number

    return 0;
}

/*

Enter a Number between 1 - 50: 25
5
4
3
2
1
0
Too Low!
Please enter another number: 30
Too Low!
Please enter another number: 35
Too Low!
Please enter another number: 40
Too Low!
Please enter another number: 45
Too Low!
Please enter another number: 48
Too High!
Please enter another number: 47
Just Right!


Enter a Number between 1 - 50: 25
5
4
3
2
1
0
Too High!
Please enter another number: 20
Too High!
Please enter another number: 15
Too High!
Please enter another number: 10
Too High!
Please enter another number: 5
Too Low!
Please enter another number: 7
Too Low!
Please enter another number: 8
Just Right!

*/