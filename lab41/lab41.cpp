//Created By: Alex Moxon
//Created On: 10/26/2017
/*This program creates a class called ArrayTools which determines information
about an integer array based on the functions called in the main.*/

#include<iostream>
using namespace std;

class ArrayTools {
    
    public:
    
    int Find_min(int min,int max); //Determines Min. based on parameters given
    int Find_max(int min,int max); //Determines Max. based on parameters given
    int Find_sum(); //Determines Sum of whole array
    int Num_even(); //Determines amount of even numbers
    int Num_odd(); //Determines amount of odd numbers
    int Search(int find_number); //Determines if number of parameter given is stored in the array
    string ls_sorted(); //Determines if the array is sorted in ascending order
    
    ArrayTools(); //Default Constructor
    ArrayTools(int array_one[], int size); //Overload Constructor
    void Print() const; //Print Function
    
    private:
    //Class Variables
    int array[];
    int size_;
    string sorted_;

    
};

//Default Constructor for array and size
ArrayTools::ArrayTools() {
    
    int input = 0;
    size_ = 10;
    
    for (int i = 0; i < size_; i++) {
        
        array[i] = input;
        input++;
    }
}

//Overload Constructor based on user input
ArrayTools::ArrayTools(int array_one[], int size) {
    
    for (int i = 0; i < size; i++) {
        
        array[i] = array_one[i];
        
    }
    
    size_ = size;
}

//Print Function that outputs all values stored in the array
void ArrayTools::Print() const {
    
    for (int i = 0; i < size_; i++) {
            
        cout << array[i] << " ";
        
    }
        cout << endl;
        
        return;
}

//Function that returns the minimum value within the ranges given
int ArrayTools::Find_min(int min,int max) {
    
    int i = 0;
    int finding_min = array[min];
    
    for (int i = min; min <= max; min++) {
        
        if(array[min] <= finding_min) {
            
            finding_min = array[min];
        }
    }
    
    return finding_min;
}


//Function that returns the maximum values within the ranges given
int ArrayTools::Find_max(int min,int max) {
    
    int finding_max = array[min];
    
    for (int i = min; min <= max; min++) {
        
        if(array[min] > finding_max) {
            
            finding_max = array[min];
        }
    }
    
    return finding_max;
}

//Function that returns the sum of all values in the array
int ArrayTools::Find_sum() {
    
    int sum = 0;
    
    for (int i = 0; i < size_; i++) {
        
        sum += array[i];
    }
    
    return sum;
}

//Function that returns the amount of odd numbers stored in your array
int ArrayTools::Num_odd() {
    
    int odd_ = 0;
    
    for (int i = 0; i < size_; i++) {
        
        if((array[i] % 2) == 1) {
            
            odd_++;
        }
    }
    
    return odd_;
}


//Function that returns the amount of even numbers stored in your array
int ArrayTools::Num_even() {
    
    int even_ = 0;
    
    for (int i = 0; i < size_; i++) {
        
        if((array[i] % 2) == 0) {
            
            even_++;
        }
    }
    
    return even_;
}
        
//Function that searches the array for a specified value and returns its location     
int ArrayTools::Search(int find_number) {
    
    int i;
    
    for (i = 0; i < size_; i++) {
        
        if(array[i] == find_number) {
            
            return i;
        }
        
        else {
            
            return -1;
        }
    }
}

//Function that checks to see if the array is sorted in ascending order
string ArrayTools::ls_sorted() {
    
    string sorted_;
    int max_val = array[0];
    int sort = 0;
    int i = 0;
    
    for (i = 0; i < size_; i++) {
        
        if(array[i] >= max_val) {
            
            sort++;
            
        }
        
    }
    
    if (sort >= 9) {
        
        sorted_ = "True";
    }
    
    else {
        
        sorted_ = "False";
    }

    return sorted_;
    
}


int main() {
    
    const int SIZE = 10;
    int myArray[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        
        cin >> myArray[i];
    }
    
    ArrayTools a(myArray, SIZE);
    
    a.Print();
    
    cout << "Min: " << a.Find_min(0,4) << endl;
    cout << "Max: " << a.Find_max(5,10) << endl;
    cout << "Sum = " << a.Find_sum() << endl;
    cout << "Search 10: " << a.Search(10) << endl;
    cout << "Sorted? " << a.ls_sorted() << endl;
    
    return 0;
}


/* 

10
9
8
7
6
5
4
3
2
1
10 9 8 7 6 5 4 3 2 1 
Min: 6
Max: 5
Sum = 55
Search 10: 0
Sorted? False

*/


/*
int ArrayTools::Nums_even_and_odd() {
    // FINDING THE EVENS
    cout <<"The Even Numbers Are: ";
    
    for (int i = 0; i<_size; i++) {
        if (_myArray[i] % 2 == 0) {
            cout << "  " << _myArray[i];
        }
    }
    cout << endl;
    //FINDING THE ODDS
    cout << "The Odd Numbers Are: ";
    for (int i = 0; i < _size; i++) {
        if (_myArray[i] % 2 != 0) {
            cout << "  " << _myArray[i];
        }
    }
}

*/