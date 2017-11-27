//Created By: Alex Moxon
//Created On: 11/26/2017
/*Copying the following code and commenting it out to demonstrate our understanding
of pointers. Along with commenting/describing certain errors within the code.*/

//Header Functions
#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

//Start of main function
int main() {
    
    //Int variable to determine length of user word input 
    int nameLength = 0;//Need to set to a char variable because you're setting it equal to name
    //User defined char value set to a new char array
    char * name = new char[];//Need to declare array parameter

    //Prompts user for input
    cout << "Please enter a 10 letter word or less" << endl;
    //Taking in char array of user word input
    cin >> name;

    //Decleration of pointer char variable "head" that contains memory address of name variable
    char * head  = name;
    //Decleration of pointer char varaible "tail" that contains memory address of name variable
    char * tail = name;
    //Setting int varaible to length of the pointer name array, which was taken from user input
    nameLength = strlen(*name);//Needs to be set to a char variable to be set equal to pointer name

    //Outputting user word input
    cout << "Your word is " << firststr << endl;//Variable not declared in function, should be changed to name var

    //If loop that checks to see if user input is less than 10 characters
    if (nameLength < 10)
    {
        //While loop that outputs each character of head variable until null character is reached
         while (*head != '\0')
         {
                //Outputting one character of head variable (pointing to name array) in each loop iteration
                cout << *head;
                //Each loop iteration adds one to the array value assigned to head variable
                head++;
         }
     }
     //Else that runs if user word input is larger than 10 characters
     else
     {
         //Output warning if input is larger than 10 characters
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }
    //Adding a line break
     cout << endl;
    //Setting tail variable to the address in memory of the length of string name - 1
     tail = &name[strlen(name) - 1];

    //If loop that runs if nameLength is less than 10
     if (nameLength < 10)//If loop is used to get the reverse of word input
     {
         //While loop that runs if tail is not equal to name
          while (tail != name)
          {
                //Outputs what the variable tail is pointing to
                 cout << *tail;
                 //Subtracts one from tail variable, during each loop iteration
                 tail--;
          }
     }
     //Adding a line break
     cout << endl;
    
     //Setting head equal to name variable
     head = name;
     //Setting tail to the address in memory of the length of name string - 1
     tail = &name[strlen(name) - 1];
    
     //Adding 1 to head variable
     head++;
     //Subtracting 1 from tail variable
     tail--;

    //If loop that runs if head and tail are pointing to the same location in memory
     if (*head == *tail)
     {
         //Output given if loops are true
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         //Output given if loops are not true
         cout << "It is not an palindrome" << endl;
     }
    //Returns 0 when program has completed running
    return 0; 
}