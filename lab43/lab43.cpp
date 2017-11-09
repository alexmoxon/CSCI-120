//Created By: Alex Moxon
//Created On: 11/7/2017
/*This program creates a virtual shopping cart, like like 4.2. In this lab we use parallel 
arrays to keep track of the book, quantity available, and price. We then use classes
with Accessors and Mutators to get information from the user and store it in our cart. 
once the user hits 0, the print function outputs the total in the cart and the program finishes.*/

#include<iostream>
#include<string>
using namespace std;

//class that holds all information about items for sale (name, quantity, price) 
//Also includes default / overload constructors and our print function.

class Item {
    
    public:
    
    Item(); //Default Constructor
    Item(string name, int quantity, double price); //Overload Constructor
    
    void Print() const; //Print Function
    
    //Mutator Functions
    void SetName(string name);
    void SetQuantity(int quantity);
    void SetPrice(double price);
    
    //Accessor Functions
    const string GetName();
    const int GetQuantity();
    const double GetPrice();
    
    private:
    //Class Variables
    string name_;
    int quantity_;
    double price_;
    
};


Item::Item() {
    
    name_ = "Un-Available";
    quantity_ = 0;
    price_ = 0.00;
    
}


Item::Item(string name, int quantity, double price) {
    
    name_ = name;
    quantity_ = quantity;
    price_ = price;
    
}


void Item::Print() const {
    
    cout <<  name_ << "         " << quantity_ << "       $ " << price_ << endl;
    
}


void Item::SetName(string name) {
    
    name_ = name;
    
}


const string Item::GetName() {
    
    return name_;
}


void Item::SetQuantity(int quantity) {
    
    quantity_ = quantity;
    
}



const int Item::GetQuantity() {
    
    return quantity_;
    
}


void Item::SetPrice(double price) {
    
    price_ = price;
    
}


const double Item::GetPrice() {
    
    return price_;
    
}


int main() {
    
    const int SIZE = 10;
    int product_number = 0;
    int count = 0;
    double total = 0.00;
    char continue_shopping = 'y';
    
    Item cart[SIZE * 20];
    Item inventory[SIZE] = {
        
        Item(" Harry Potter          ",      8,     3.25),
        Item(" Moby Dick             ",      3,     2.55),
        Item(" Hamlet                ",      8,     5.65),
        Item(" The Great Gatsby      ",      2,     1.55),
        Item(" Nineteen Eighty Four  ",      9,     4.25),
        Item(" Alice in Wonderland   ",      4,     2.75),
        Item(" Great Expectations    ",      9,     3.25),
        Item(" The Catcher In The Rye",      2,     2.15),
        Item(" The Grapes of Wrath   ",      4,     1.75),
        Item("The Bible             ",       1,     1.15)
    };

    
    while ((continue_shopping == 'y') || (continue_shopping == 'Y')) {
        
        cout << endl;
        cout << "       BOOK        " << "            QUANTITY" << "     PRICE" << endl;
        cout << "---------------------------------------------------" << endl;
        
        for (int i = 0; i < SIZE; i++) {
            
            cout << i + 1 << ") ";
            
            inventory[i].Print();
            
        }
        
        cout << endl;
        cout << "Enter the item number to add to your cart. Or enter '0' to finish and check-out:" << endl;
        cin >> product_number;
        
        int num = product_number - 1;
        
        if (product_number == 0) {
            
            continue_shopping = 'n';
            
        }
        
        else {
            
            if (inventory[num].GetQuantity() >  0) {
                
                inventory[num].SetQuantity(inventory[num].GetQuantity() - 1);
                
                cart[count] = inventory[num];
                
                cout << cart[count].GetName() << " was added to your cart."  << endl;
                
                count++;
                
            }
            
            else {
                
                cout << "Out of stock, sorry!" << endl;
                cout << "Enter the item number to add to your cart." << endl;
                cin >> product_number;
                
            }
            
            cout << "(y or n) Would you like to keep shopping?" << endl;
            cin >> continue_shopping;
            
            }
        }
        
        cout << "Current Shopping Cart:" << endl;
        
        for (int i = 0; i <= count; i++)  {
            
            if(cart[i].GetPrice() > 0.000001) {
                
                cout << cart[i].GetName() << "       $" << cart[i].GetPrice() << endl;
                
                total += cart[i].GetPrice();
            }
        }
    
    
    cout << endl;
    cout << "Total: $" << total;
    
    return 0;
}


/*

***Incorrect Input Example:


       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   8       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         8       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           9       $ 4.25
6)  Alice in Wonderland            4       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         2       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      1       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
22
Out of stock, sorry!
Enter the item number to add to your cart.
1
(y or n) Would you like to keep shopping?
n
Current Shopping Cart:

Total: $0


*** Full Run Through:


       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   8       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         8       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           9       $ 4.25
6)  Alice in Wonderland            4       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         2       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      1       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
5
 Nineteen Eighty Four   was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   8       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         8       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           8       $ 4.25
6)  Alice in Wonderland            4       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         2       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      1       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
1
 Harry Potter           was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   7       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         8       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           8       $ 4.25
6)  Alice in Wonderland            4       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         2       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      1       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
5
 Nineteen Eighty Four   was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   7       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         8       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           7       $ 4.25
6)  Alice in Wonderland            4       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         2       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      1       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
8
 The Catcher In The Rye was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   7       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         8       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           7       $ 4.25
6)  Alice in Wonderland            4       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         1       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      1       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
10
The Bible              was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   7       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         8       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           7       $ 4.25
6)  Alice in Wonderland            4       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         1       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      0       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
6
 Alice in Wonderland    was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   7       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         8       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           7       $ 4.25
6)  Alice in Wonderland            3       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         1       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      0       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
3
 Hamlet                 was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   7       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         7       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           7       $ 4.25
6)  Alice in Wonderland            3       $ 2.75
7)  Great Expectations             9       $ 3.25
8)  The Catcher In The Rye         1       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      0       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
7
 Great Expectations     was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   7       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         7       $ 5.65
4)  The Great Gatsby               2       $ 1.55
5)  Nineteen Eighty Four           7       $ 4.25
6)  Alice in Wonderland            3       $ 2.75
7)  Great Expectations             8       $ 3.25
8)  The Catcher In The Rye         1       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      0       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
4
 The Great Gatsby       was added to your cart.
(y or n) Would you like to keep shopping?
y

       BOOK                    QUANTITY     PRICE
---------------------------------------------------
1)  Harry Potter                   7       $ 3.25
2)  Moby Dick                      3       $ 2.55
3)  Hamlet                         7       $ 5.65
4)  The Great Gatsby               1       $ 1.55
5)  Nineteen Eighty Four           7       $ 4.25
6)  Alice in Wonderland            3       $ 2.75
7)  Great Expectations             8       $ 3.25
8)  The Catcher In The Rye         1       $ 2.15
9)  The Grapes of Wrath            4       $ 1.75
10) The Bible                      0       $ 1.15

Enter the item number to add to your cart. Or enter '0' to finish and check-out:
9
 The Grapes of Wrath    was added to your cart.
(y or n) Would you like to keep shopping?
n
Current Shopping Cart:
 Nineteen Eighty Four         $4.25
 Harry Potter                 $3.25
 Nineteen Eighty Four         $4.25
 The Catcher In The Rye       $2.15
The Bible                     $1.15
 Alice in Wonderland          $2.75
 Hamlet                       $5.65
 Great Expectations           $3.25
 The Great Gatsby             $1.55
 The Grapes of Wrath          $1.75

Total: $30

*/