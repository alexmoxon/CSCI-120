//Created By: Alex Moxon
//Created On: 11/16/2017
/*This program takes in a group of student grades from a .txt file. It
then reads the data and calculates the semester GPA and total credits 
received v. total credits possible. It then outputs this information to
a .html file, which prints it onto a webpage.*/

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    
    ifstream inFS; //Input file stream decleration
    ofstream outFS; //Output file stream decleration
    
    
    const int NAME = 99; //Number of elements available for array
    
    //Varaibles used to determine students GPA
    double grade_point_average_one = 0.0; 
    double grade_point_average_two = 0.0;
    double grade_point_average_three = 0.0;
    
    //String array for first and last name
    string first_name[NAME];
    string last_name[NAME];
    
    //Int array that holds number of classes student is taking
    int number_classes[NAME];
    
    //Int array that holds total credits possible for student
    int total_class_hours[NAME];
    
    //Int array used to hold class credits taken from input file
    int class_hours_one[NAME];
    int class_hours_two[NAME];
    int class_hours_three[NAME];
    
    //Char array that holds grades taken from input file
    char grade_one[NAME];
    char grade_two[NAME];
    char grade_three[NAME];
    
    //Variable that produces total credits earned by student
    int credits_one = 0;
    int credits_two = 0;
    int credits_three = 0;
    
    
    //Opening input file
    inFS.open("input.txt");
    
    
    //Checking to see if file was able to open properly
    if (!inFS.is_open()) {
        
        cout << "Could not open file input.txt" << endl;
        
        return 1;
    } 
    
    else {
        
        cout << "File: input.txt is opened" << endl;
    }
        
     
        
    //Person 1
    //Storing first and last name from input file
    inFS >> first_name[0];
    inFS >> last_name[0];

    //Storing number of classes from input file
    inFS >> number_classes[0];
    
    //For loop that stores class hour and grade, for each iteration    
    for (int i = 0; i < number_classes[0]; ++i) {
            
        inFS >> class_hours_one[i];
        inFS >> grade_one[i];
            
    }
    
    //outputting information taken from input file
    cout << first_name[0] << " " << last_name[0] << endl;
    cout << number_classes[0] << endl;
            
    for (int i = 0; i < number_classes[0]; ++i) {
                
        cout << class_hours_one[i] << " " << grade_one[i] << endl;
    
    }
            
    //calculating total amount of hours to be used to find GPA
    for (int i = 0; i < number_classes[0]; ++i) {
                
        total_class_hours[0] = total_class_hours[0] + class_hours_one[i];
                
    }
    
    //Setting total credits earned variable to total class hours, which can be modified if D or F        
    credits_one = total_class_hours[0];
           
           
           
    //Calculating GPA for first student
    
    for (int i = 0; i < number_classes[0]; ++i) {
                
        if(grade_one[i] == 'A') {
                    
            grade_point_average_one = grade_point_average_one + 4;
                    
        }
                
        else if(grade_one[i] == 'B') {
                    
            grade_point_average_one = grade_point_average_one + 3;
                    
        }
                
        else if(grade_one[i] == 'C') {
                    
            grade_point_average_one = grade_point_average_one + 2;
                    
        }
                
        else if(grade_one[i] == 'D' || 'F') {
                    
            grade_point_average_one = grade_point_average_one + 0;
            
            //Subtracting class credit if student received D or F
            credits_one = credits_one - class_hours_one[i];
                    
        }
    }
    
    //Finding student grade point average            
    grade_point_average_one = (grade_point_average_one / number_classes[0]);
    
    //Outputting students information
    cout << "Total Possible Credits For " << first_name[0] << " " << last_name[0] << ": " << total_class_hours[0] << endl;
    cout << "Total Credits Earned: " << credits_one << endl;
    cout << "GPA: " << grade_point_average_one << endl;
    cout << endl;
        
            
            
    //Person 2
    //Storing first and last names taken from .txt input file        
    inFS >> first_name[1];
    inFS >> last_name[1];
    
    //Number of classes         
    inFS >> number_classes[1];
    
    //For loop that stores class hours and grade for each iteration         
    for (int i = 0; i < number_classes[1]; ++i) {
                
        inFS >> class_hours_two[i];
        inFS >> grade_two[i];
                
    }
    
    //Outputting student information         
    cout << first_name[1] << " " << last_name[1] << endl;
    cout << number_classes[1] << endl;
    
            
    for (int i = 0; i < number_classes[1]; ++i) {
                
        cout << class_hours_two[i] << " " << grade_two[i] << endl;
                
    } 
            
    //For loop for finding total credits possible        
    for (int i = 0; i < number_classes[1]; ++i) {
                
        total_class_hours[1] = total_class_hours[1] + class_hours_two[i];
                
    }
    
    //Setting user completed credits equal to credits possible for modifacation in following for loop        
    credits_two = total_class_hours[1];
            
            
            
    //Calculating GPA for second student
    
    for (int i = 0; i < number_classes[1]; ++i) {
                
        if(grade_two[i] == 'A') {
                    
            grade_point_average_two = grade_point_average_two + 4;
                    
        }
                
        else if(grade_two[i] == 'B') {
                    
            grade_point_average_two = grade_point_average_two + 3;
                    
        }
                
        else if(grade_two[i] == 'C') {
                    
            grade_point_average_two = grade_point_average_two + 2;
                    
        }
                
        else if(grade_two[i] == 'D' || 'F') {
                    
            grade_point_average_two = grade_point_average_two + 0;
            
            //If user receives D or F, credits are subtracted from total credit possible
            credits_two = credits_two - class_hours_two[i];
        }
    }
            

    //Finding student GPA        
    grade_point_average_two = (grade_point_average_two / number_classes[1]);
    
    //Outputting students credits and GPA        
    cout << "Total Possible Credits For " << first_name[1] << " " << last_name[1] << ": " << total_class_hours[1] << endl;
    cout << "Total Credits Earned: " << credits_two << endl;
    cout << "GPA: " << grade_point_average_two << endl;
    cout << endl;
            
            
    //Person 3
    //Storing first and last name taken from input .txt file
    inFS >> first_name[2];
    inFS >> last_name[2];
    
    //Storing amount of classes student is currently enrolled in        
    inFS >> number_classes[2];
    
    //For loop that takes in class credit amount and student grade for each iteration        
    for (int i = 0; i < number_classes[2]; ++i) {
                
        inFS >> class_hours_three[i];
        inFS >> grade_three[i];
                
    }
    
    //Outputting student information taken from .txt file        
    cout << first_name[2] << " " << last_name[2] << endl;
    cout << number_classes[2] << endl;
            
    for (int i = 0; i < number_classes[2]; ++i) {
                
        cout << class_hours_three[i] << " " << grade_three[i] << endl;
                
    }
    
    //For loop finding total credits possible for student        
    for (int i = 0; i < number_classes[2]; ++i) {
                
        total_class_hours[2] = total_class_hours[2] + class_hours_three[i];
                
    }
    
    //Setting total credits earned by student to possible credits earned, for possible modification in following for-loop        
    credits_three = total_class_hours[2];
     
     
        
    //Calculating GPA for third student
    for (int i = 0; i < number_classes[2]; ++i) {
                
        if(grade_three[i] == 'A') {
                    
            grade_point_average_three = grade_point_average_three + 4;
                    
        }
                
        else if(grade_three[i] == 'B') {
                    
            grade_point_average_three = grade_point_average_three + 3;
                    
        }
                
        else if(grade_three[i] == 'C') {
                    
            grade_point_average_three = grade_point_average_three + 2;
                    
        }
                
        else if(grade_three[i] == 'D' || 'F') {
                    
            grade_point_average_three = grade_point_average_three + 0;
            
            //If user receives D or F, credits are subtracted from total possible credits
            credits_three = credits_three - class_hours_three[i];
        }
    }
    
    //Finding student GPA            
    grade_point_average_three = (grade_point_average_three / number_classes[2]);
    
    //Outputting students GPA and class credit information            
    cout << "Total Possible Credits For " << first_name[2] << " " << last_name[2] << ": " << total_class_hours[2] << endl;
    cout << "Total Credits Earned: " << credits_three << endl;
    cout << "GPA: " << grade_point_average_three;
                
    //Opening output HTML file
    outFS.open("output.html");
    
    //Loop to check if file was found and opened properly
    if (!outFS.is_open()) {
        
        cout << "Could not open file output.html" << endl;
        
        return 1;
    } 
    
    
    //Information sent to HTML file for webpage configuration             
    outFS << "<!DOCTYPE html>" << endl;
    outFS << "<html>" << endl;
    outFS << "<head>" << endl;
    outFS << "<title>Student Transcript</title>" << endl;
    outFS << "</head>" << endl;
    outFS << "<body>" << endl;
    outFS << "<h1>Student Transcripts</h1>";
                
                
    //Sending first students information to the HTML file
    outFS << "<h1>" << first_name[0] << " " << last_name[0] << ":" << "</h1>" << endl;
    outFS << endl;
    outFS << "<h3>" << "Total Possible Credits: " << total_class_hours[0] << "</h3>" << endl;
    outFS << "<h3>" << "Total Credits Earned: " << credits_one << "</h3>" << endl;
    outFS << "<h3>" << "Total GPA: " << grade_point_average_one << "</h3>" << endl;
    outFS << endl;
    outFS << endl;
                
    //Sending second students information to the HTML file
    outFS << "<h1>" << first_name[1] << " " << last_name[1] << ":" << "</h1>" << endl;
    outFS << endl;
    outFS << "<h3>" << "Total Possible Credits: " << total_class_hours[1] << "</h3>" << endl;
    outFS << "<h3>" << "Total Credits Earned: " << credits_two << "</h3>" << endl;
    outFS << "<h3>" << "Total GPA: " << grade_point_average_two << "</h3>" << endl;
    outFS << endl;
    outFS << endl;
                
    //Sending third students information to the HTML file
    outFS << "<h1>" << first_name[2] << " " << last_name[2] << ":" << "</h1>" << endl;
    outFS << endl;
    outFS << "<h3>" << "Total Possible Credits: " << total_class_hours[2] << "</h3>" << endl;
    outFS << "<h3>" << "Total Credits Earned: " << credits_three << "</h3>" << endl;
    outFS << "<h3>" << "Total GPA: " << grade_point_average_three << "</h3>" << endl;
    outFS << endl;
    outFS << endl;
                
    
    outFS << "</body>" << endl;
    outFS << "</html>" << endl;
    
    //Closing .txt file        
    inFS.close();
    
    //Closing .html file
    outFS.close();
    
    return 0;
}

/*

Example of C++ File Output:

File: input.txt is opened
Suzy Cue
4
3 A
3 A
3 A
3 B
Total Possible Credits For Suzy Cue: 12
Total Credits Earned: 12
GPA: 3.75

Joe Joseph
4
4 D
3 C
3 B
3 C
Total Possible Credits For Joe Joseph: 13
Total Credits Earned: 9
GPA: 1.75

Jillian Smith
5
4 C
3 C
4 C
3 B
Total Possible Credits For Jillian Smith: 17
Total Credits Earned: 17
GPA: 2.2

*/