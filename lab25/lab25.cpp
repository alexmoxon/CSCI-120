//Created By: Alex Moxon
//Created On: 10/2/2017
/*Create a book class that carries information (title, author, copyright year). Within
these functions, information can be drawn from to Set and Get for each variable along with
a print function that carries all the data for the books.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Book { // Takes in five books of three varibles each (title, author, copyright year) from user input. 
            //Stores them within the class as objects and then prints out all the information at the end.
    
    public:
    void SetTitle(string titleGiven); //Assigns title variable to a book object
    string GetTitle() const;         //Returns title variable 
    
    void SetAuthor(string authorGiven); //Assigns author variable to a book object
    string GetAuthor() const;           //Returns author variable
    
    void SetCopyrightYear(int copyrightYearGiven); //Assigns copyright year variable to a book object
    int GetCopyrightYear() const;                 //Returns copyright year variable.
    
    void Print(){ //Print function, used for each book object, called at end
    cout << "Title: " << GetTitle() << endl;
    cout << "Author: " << GetAuthor() << endl;
    cout << "Copyright Year: " << GetCopyrightYear() << endl;
    cout << endl;
} 

    private: //Variables taken from user input
    string title_; 
    string author_;
    int copyrightyear_;
  
};

void Book::SetTitle(string titleGiven){ 
    
    title_ = titleGiven;
    return;
}

string Book::GetTitle() const {
    
    return title_;
}

void Book::SetAuthor(string authorGiven){
    
    author_ = authorGiven;
    return;
}

string Book::GetAuthor() const {
    
    return author_;
}

void Book::SetCopyrightYear(int copyrightYearGiven){
    
    copyrightyear_ = copyrightYearGiven;
    return;
}

int Book::GetCopyrightYear() const {
    
    return copyrightyear_;
}

int main() {
    string title_ = ""; //User input variables for each book object
    string author_ = "";
    int copyrightyear_ = 0;
    
    Book book1; //Creating multiple book objects for our book class
    Book book2;
    Book book3;
    Book book4;
    Book book5;
    
    cin.clear();
    cin.sync();

    //Book 1
    cout << "Please enter a book title: " << endl; //User input for stored book objects
    getline(cin, title_);
    book1.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    getline(cin, author_);
    book1.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyrightyear_;
    cin.ignore();
    book1.SetCopyrightYear(copyrightyear_);
    
    //Book 2
    cout << "Please enter a book title: " << endl;
    getline(cin, title_);
    book2.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    getline(cin, author_);
    book2.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyrightyear_;
    cin.ignore();
    book2.SetCopyrightYear(copyrightyear_);
    
    //Book 3
    cout << "Please enter a book title: " << endl;
    getline(cin, title_);
    book3.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    getline(cin, author_);
    book3.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyrightyear_;
    cin.ignore();
    book3.SetCopyrightYear(copyrightyear_);
    
    //Book 4
    cout << "Please enter a book title: " << endl;
    getline(cin, title_);
    book4.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    getline(cin, author_);
    book4.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyrightyear_;
    cin.ignore();
    book4.SetCopyrightYear(copyrightyear_);
    
    //Book 5
        cout << "Please enter a book title: " << endl;
    getline(cin, title_);
    book5.SetTitle(title_);
    
    cout << "Please enter the authors name: " << endl;
    getline(cin, author_);
    book5.SetAuthor(author_);
    
    cout << "Please enter the copyright year: " << endl;
    cin >> copyrightyear_;
    cin.ignore();
    book5.SetCopyrightYear(copyrightyear_);
    
    cout << endl;


    
   book1.Print(); //Print function call 
   book2.Print();
   book3.Print();
   book4.Print();
   book5.Print();
   
    return 0;
}

/*
Please enter a book title: 
Harry Potter
Please enter the authors name: 
J.K. Rowling
Please enter the copyright year: 
1997
Please enter a book title: 
Enders Game
Please enter the authors name: 
Orson Scott Card
Please enter the copyright year: 
1985
Please enter a book title: 
Moby Dick
Please enter the authors name: 
Herman Melville
Please enter the copyright year: 
1851
Please enter a book title: 
Lord of the Flies
Please enter the authors name: 
William Golding
Please enter the copyright year: 
1954
Please enter a book title: 
Lord of the Rings
Please enter the authors name: 
Allen and Unwin
Please enter the copyright year: 
1937

Title: Harry Potter
Author: J.K. Rowling
Copyright Year: 1997

Title: Enders Game
Author: Orson Scott Card
Copyright Year: 1985

Title: Moby Dick
Author: Herman Melville
Copyright Year: 1851

Title: Lord of the Flies
Copyright Year: 1954

Title: Lord of the Rings
Author: Allen and Unwin
Copyright Year: 1937


*/