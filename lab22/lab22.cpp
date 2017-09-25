//Created By: Alex Moxon
//Created On: 09/25/2017
/*Creating a function that outputs a random number between 
1 - 100 and calling it within the main() */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void RandomNumber() { //declaring function
    srand(time(0));
    cout << "Your random number is: " << rand() % 101 + 1 << endl; //Function prints our random number
}

int main() {
    RandomNumber(); //Calling function within the main 
    return 0;
}