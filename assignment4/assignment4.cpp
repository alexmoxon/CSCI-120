//Created By: Alex Moxon
//Created On: 11/16/2017
/*insert definition here */

#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

class Student {
    
    public:
    
    Student();
    
    void SetCharAnswer(char correct_answer[], char student_answer[]);
    int const GetCharAnswer();
    
    void SetWordAnswer(string correct_word_answer[], string student_word_answer[]);
    string const GetWordAnswer();
    
    
    private:
    
    double total_questions_wrong = 0.0;
    double score = 0.0;
    
    int i = 0;
    int question_count;
    
    char student_answers[];
    char correct_answers[];
    
    string student_written_answers[];
    string correct_written_answers[];
    
};


Student::Student() {
    
    total_questions_wrong = 0.0;
    score = 0.0;

    
    
    return;
}



void Student::SetCharAnswer(char correct_answer[], char student_answer[]) {
    
    double score= 0.0;
    
    char student_answers[i];
    char correct_answers[i];
    
    student_answers[i] = student_answer[i];
    correct_answers[i] = correct_answer[i];
    
    if (correct_answers[i] == student_answers[i]) {
        
        score += 1.0;

    }
    
        
        else {
            
            ++question_count;
            
        }
    
    
}


int const Student::GetCharAnswer() {
    
    
}





void Student::SetWordAnswer(string correct_word_answer[], string student_word_answer[]) {
    
    
    
    
}


string const Student::GetWordAnswer() {
    
    
}



int main() {
    
    Student Student1;
    
    ifstream Student_An;
    ifstream Correct_An;
    
    ofstream outFS;
    
    string first_name[99];
    string last_name[99];
    
    //Answer key variables
    char answer_key[17];
    string answer_key_word[3];
    
    //Student variables
    string answer_student_word[3];
    char answer_student[17];
    
    double score = 0.0;
    
    //Opening input answer key .txt file
    Correct_An.open("answer_key.txt");
    
    //Opening input student test answers .txt file
    Student_An.open("student_answers.txt");
    
    //Checking to make sure input files are found
    if (!Correct_An.is_open() || !Student_An.is_open()) {
        
        cout << "Could not find file, please try again." << endl;
        
    }
    
    //Opening output .txt file
    outFS.open("output_answers.txt");
    
    //Checking to make sure output file is found
    if (!outFS.is_open()) {
        
        cout << "Could not find your output file, please try again." << endl;
        
    }
    
    //Getting all of the Answer key information
    //For loop getting first 18 char characters from answer key
    for (int i = 0; i < 18; ++i) {
        
        Correct_An >> answer_key[i];
        
    }
    
    //For loop getting last three string answers, from key
    for (int i = 18; i < 20; ++i) {
        
        Correct_An >> answer_key_word[i];
    }
    
    //For loop to get all char answers
    for (int i = 0; i < 18; ++i) {
            
        Student_An >> answer_student[i];
            
    }
    
        
    //For loop to get all single word answers
    for (int i = 0; i < 3; ++i) {
            
        Student_An >> answer_student_word[i];
            
    }
    
    
    while (!Student_An.eof()) {
    
    score = 0.0;
    
    //Getting all of the students information
    //For loop getting students first and last name
    for (int i = 0; i < 1; ++i) {
        
        Student_An >> first_name[i];
        Student_An >> last_name[i];
        
        outFS << first_name[i] << " " << last_name[i] << endl;
        
        
    }
}


    return 0;
}