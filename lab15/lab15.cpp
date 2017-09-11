//Created By: Alex Moxon
//Created On: 09/07/2017
/* Using strings to take a single user input at a time. 
Then turning the user inputs into a Madlib*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string foreignCountry; //Using strings for single word user input
    string adverb;         //Take these string inputs and implement them into the madlib paragraph
    string adjective;
    string animal;
    string verbEndingInIng;
    string verb;
    string verbTwo;
    string typeOfLiquid;
    string place;
    string partOfBody;
    
    cout << "Enter a Foreign Country: "; //asking user for foreign country
    cin >> foreignCountry;               //input country is saved in the foreignCountry string
    
    cout << "Enter an Adverb: ";
    cin >> adverb;
    
    cout << "Enter an Adjective: ";
    cin >> adjective;
    
    cout << "Enter an Animal: ";
    cin >> animal;
    
    cout << "Enter a Verb ending in ing: ";
    cin >> verbEndingInIng;
    
    cout << "Enter a Verb: ";
    cin >> verb;
    
    cout << "Enter a Place: ";
    cin >> place;
     
    cout << "Enter a Type of Liquid: ";
    cin >> typeOfLiquid;
    
    cout << "Enter a part of your body: ";
    cin >> partOfBody;
    
    cout << "Enter another Verb: ";
    cin >> verbTwo;
    
     /* below I print out the madlib with the users string inputs implemented into their
     pre-set places throughout the paragraph*/
     
    cout << "If you are traveling in " << foreignCountry << " and find yourself having to cross";
    cout << " a piranha-filled river, here's how to do it " << adverb << "." << endl;
    cout << "Piranhas are more " << adjective << " during the day, so cross the river at night." << endl;
    cout << "Avoid areas with netted " << animal << " traps as piranhas may be " << verbEndingInIng;
    cout << " there looking to " << verb << " them!" << endl;
    cout << "Whatever you do, if you have an open wound, try to find another way to get back to the ";
    cout << place << "." << endl; 
    cout << "Piranhas are attracted to fresh " << typeOfLiquid << " & will most likely ";
    cout << "take a bite out of your " << partOfBody << " if you " << verbTwo << " in the water!" << endl;
    
    return 0;
}