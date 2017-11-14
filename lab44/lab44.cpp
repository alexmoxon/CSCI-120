//Created By: Alex Moxon
//Created On: 11/9/2017
/*Insert definition here.*/

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main() {
    
    const int first_name = 10;
    const int last_name = 20;
    
    char first[first_name] = "";
    char last[last_name] = "";
    
    
    int i = 0;
    
    
    cout << "Enter your first name (no more than 10 characters) :" << endl;
    cin >> first;
    
    while (strlen(first) > 10) {
        
        cout << "Error: First name exceeds size limit. Please try again: " << endl;
        cin >> first;
        
    }
    
    
    cout << "Enter your last name (no more than 20 characters) :" << endl;
    cin.getline(last);
    
    while (strlen(last) > 20) {
        
        cout << "Error: Last name exceeds size limit. Please try again: " << endl;
        cin.getline(last);
        
    }
    
    if (strcmp(first, last) == 0) {
        
        cout << "Heads up! Your first name and last name are the same!" << endl;
        
    }
    tolower(first)
    strcpy(first, last);
        
}
