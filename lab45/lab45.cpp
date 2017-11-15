//Created By: Alex Moxon
//Created On: 11/13/2017
/*Program takes first and last name from user and immediately makes sure they're within
character limit. Error will output if first name is over 10 characters, last name is over 
20 characters, or they're the same.  Once inputs are determined as appropriate, three usernames
are outputted for the users choice. */

#include<iostream>
#include<cstring>
#include<cctype>
#include<string>
using namespace std;

int main() {
    
    string firstName; //First Name input
    string lastName; //Last Name input
    

    //Asking for user input
    
    cout << "Please enter your first name (max 10 characters) : " << endl;
    cin >> firstName;
    
    cout << "Please enter your last name (max 20 characters) : " << endl;
    cin >> lastName;
    
    //If first name is over 10 characters, warning will appear
    while (firstName.length() > 10) {
        
        cout << "Error: First name exceeds character limit! Please try again." << endl;
        cin >> firstName;
    }
    
    //If last name is over 20 charracters, warning will appear
    while (lastName.length() > 20) {
        
        cout << "Error: Last name exceeds character limit! Please try again." << endl;
        cin >> lastName;
    }
    
    //If statement to determine if first and last name are the same
    if (firstName.find(lastName) != string::npos) {
        
        cout << "Warning! First and Last names are the same!" << endl;
    }
    
    
    //Prints out first and last name 
    cout << endl;
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Which of the three user names would you like: " << endl;
    
    //Changes uppercase to lowercase in first and last name
    firstName[0] = tolower(firstName[0]);
    lastName[0] = tolower(lastName[0]);
    
    //Outputs three username options
    cout << "1) " << firstName << lastName << endl;
    
    firstName.resize(2);
    
    cout << "2) " << firstName << lastName << endl;
    
    firstName.resize(1);
    
    cout << "3) " << firstName << lastName << endl;
    
    return 0;
}

/*

Your Name Run Through:

Please enter your first name (max 10 characters) : 
Alex
Please enter your last name (max 20 characters) : 
Moxon

Name: Alex Moxon
Which of the three user names would you like: 
1) alexmoxon
2) almoxon
3) amoxon


April Browne Run Through:

Please enter your first name (max 10 characters) : 
April
Please enter your last name (max 20 characters) : 
Browne

Name: April Browne
Which of the three user names would you like: 
1) aprilbrowne
2) apbrowne
3) abrowne


AnaElizabeth Hazeltine-Smith Run Through:

Please enter your first name (max 10 characters) : 
AnaElizabeth
Please enter your last name (max 20 characters) : 
Hazeltine-Smith
Error: First name exceeds character limit! Please try again.


James James Run Through:

Please enter your first name (max 10 characters) : 
James
Please enter your last name (max 20 characters) : 
James
Warning! First and Last names are the same!

Name: James James
Which of the three user names would you like: 
1) jamesjames
2) jajames
3) jjames

*/