//Created By: Alex Moxon
//Created On: 11/9/2017
/*Insert definition here.*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main () {
    
    const int first_name = 10;// Max string length for first name
    const int last_name = 20;//Max string length for last name
    
    char first_str[first_name] = ""; // User defined first namestring
    char last_str[last_name] = ""; // User defined first namestring

    bool same = false; //bool for compare
    char same_name = 'a'; // char user input for the same last name.
    
    cout << "Do you have the same first name and last name? \n";
    cout << "Please select Y or y for yes, or N or n for no. \n";
    cin >> same_name;

    // Prompt user to enter first name
    cout << "Enter your first name (up to 10 characters): ";
    cin >> first_str;
    
    // Prompt user to enter last name
    cout << "Enter your last name (up to 20 characters): ";
    cin >> last_str;


    //PRINTS OUT THREE USERNAME OPTIONS
    cout << "Here's the list of available usernames: " << endl;
   
    for(int i = 0; i <= 0; i++){ //first char of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= last_name; j++){ //full last name
           cout << last_str[j];
    }
    cout << endl;
    for(int i = 0; i <= 2; i++){//First 3 chars of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= last_name; j++){//full last name
           cout << last_str[j];
    } 
    cout << endl;
    for(int i = 0; i <= 4; i++){//first 4 chars of first name
            cout << first_str[i];
        }
       for (int j = 0; j <= 4; j++){//first 4 chars of lastname
           cout << last_str[j];
    }
    cout << endl;
    //END PRINT OUT OF USERNAMES

    
    //FINDS IF USER STRING IS OVER THE ARRAY AMOUNT
    cout << "Your first name has: " << strlen(first_str) << " " << "characters \n";
    if (strlen(first_str) > first_name){
        cout << "Please enter a shorter first name: ";
        cin >> first_str;
    }
    cout << "Your first name has: " << strlen(last_str) << " "  << "characters \n";
    if (strlen(last_str) > last_name){
        cout << "Please enter a shorter last name: ";
        cin >> last_str;        
    }
    //END OF FIND MAX
    
    
    //COMPARES IF THE STRINGS ARE THE SAME
    if((strcmp(first_str, last_str) == 0) && (same_name == 'Y' || same_name == 'y')){
        same = true;
        cout << "The strings are the same. \n";
    }
        else {
            same = false;
            cout << "The strings are different. \n";
        }
    while(same == true && same_name == 'N' || same_name == 'n') { //
        cout << "Your first and last name are the same - this is rare! \n";
        cout << "Please enter a different first name: ";
        cin >> first_str; 
        cout << "Please enter a different last name: ";
        cin >> last_str;
    }
    //END OF THE COMPARE 
    
    
    return 0;
}

