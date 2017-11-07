//Created By: Alex Moxon
//Created On: 11/6/2017
/*This program creates a virtual shopping cart that keeps track of inventor and price 
of atleast 10 items in their cart. When the user purchases an item from the inventory, 
it is removed from the "shelf" and the price is added to their total. Once the user is
done adding items to their cart, the program will print a receipt of what they have ordered
and the total cost of their purchased items.*/

#include<iostream>
using namespace std;

int main() {
    
    double total_= 0.0; //Total final cost
    
    //Parallel Arrays
    string book[10]; //Name of books
    int inventory[10]; //Quantity of book in storage
    double price[10];  //Price of each book
    int purchased[10]; //Quantity of books bought
    
    
    int book_number = 99; //Input number for choosing book to purchase 
    int amount = 0; //Quantity of books bought
    
    for (int i = 0; i < 10; i++) {
        
        purchased[i] = 0;
    }
    
    book[0] = " Harry Potter          ";
    book[1] = " Moby Dick             ";
    book[2] = " Hamlet                ";
    book[3] = " The Great Gatsby      ";
    book[4] = " Nineteen Eighty Four  ";
    book[5] = " Alice in Wonderland   ";
    book[6] = " Great Expectations    ";
    book[7] = " The Catcher in the Rye";
    book[8] = " The Grapes of Wrath   ";
    book[9] = "The Bible             ";
    
    
    inventory[0] = 8;
    inventory[1] = 3;
    inventory[2] = 8;
    inventory[3] = 2;
    inventory[4] = 9;
    inventory[5] = 4;
    inventory[6] = 9;
    inventory[7] = 2;
    inventory[8] = 4;
    inventory[9] = 1;
    
    
    price[0] = 3.25;
    price[1] = 2.55;
    price[2] = 5.65;
    price[3] = 1.55;
    price[4] = 4.25;
    price[5] = 2.75;
    price[6] = 3.25;
    price[7] = 2.15;
    price[8] = 1.75;
    price[9] = 1.15;
    
    
    while (book_number != 0) { //While loop that kicks if user enters "0"
        
        cout << "Welcome to Alex's Online Book Store!" << endl;
        cout << "Enter the item number of the books you'd like to add to your cart!" << endl;
        cout << "You can always enter 0 to checkout." << endl;
        cout << endl;
        cout << "   Book Name ~ Amount Stocked ~ Price" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        
        
        for (int i = 0; i < 10; i++) { //Shows book menu
            
            cout << i + 1 << ". " << book[i] << "   " << inventory[i] << "   $" << price[i] << endl;
            
        }
        
        cin >> book_number; //Book number taken from user that kicks if input is 0
        
        if (book_number == 0) {
            
            break;
            
        }
        
        else if ((book_number >= 1) && (book_number <=10)) { //Input else-if for book purchasing decision in menu
            
            cout << "How many would you like to purchase?" << endl;
            cin >> amount;
            
            if (inventory[book_number - 1] - amount < 0) { //If statement that checks amount of books in inventory vs. purchased
                
                cout << "Wasn't able to add this item to cart. Currently not enough in stock." << endl;
                cout << "======================================================================" << endl;
                
                amount = 0;
                book_number = 99;
                
            }
        
        else { 
            
            inventory[book_number - 1] = inventory[book_number - 1] - amount;
            purchased[book_number - 1] = purchased[book_number - 1] + amount;
            
            total_ = total_ + (amount * price[book_number - 1]);
            amount = 0;
            book_number = 99;
            
        }
    }
    
    else {
        
        cout << "INVALID INPUT. PLEASE RESTART AND TRY AGAIN" << endl;
        
    }
    
}

cout << "Your Cart:" << endl; //Total of user cart receipt 
cout << "   Book Name ~ Amount Bought ~ Price" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

for (int i = 0; i < 10; i++) { //Display loop of user cart
    
    cout << i + 1 << ". " << book[i] << "   " << purchased[i] << "   $" << price[i] << endl;
    
}

cout << "Total Amount: $" << total_ << endl; 

}

/*

***Error Input:

Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             8   $3.25
2.  Moby Dick                3   $2.55
3.  Hamlet                   8   $5.65
4.  The Great Gatsby         2   $1.55
5.  Nineteen Eighty Four     9   $4.25
6.  Alice in Wonderland      4   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
1
How many would you like to purchase?
9
Wasn't able to add this item to cart. Currently not enough in stock.
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             8   $3.25
2.  Moby Dick                3   $2.55
3.  Hamlet                   8   $5.65
4.  The Great Gatsby         2   $1.55
5.  Nineteen Eighty Four     9   $4.25
6.  Alice in Wonderland      4   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15











***Full Run Through:

Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             8   $3.25
2.  Moby Dick                3   $2.55
3.  Hamlet                   8   $5.65
4.  The Great Gatsby         2   $1.55
5.  Nineteen Eighty Four     9   $4.25
6.  Alice in Wonderland      4   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
1
How many would you like to purchase?
2
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                3   $2.55
3.  Hamlet                   8   $5.65
4.  The Great Gatsby         2   $1.55
5.  Nineteen Eighty Four     9   $4.25
6.  Alice in Wonderland      4   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
2
How many would you like to purchase?
2
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   8   $5.65
4.  The Great Gatsby         2   $1.55
5.  Nineteen Eighty Four     9   $4.25
6.  Alice in Wonderland      4   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
3
How many would you like to purchase?
2
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   6   $5.65
4.  The Great Gatsby         2   $1.55
5.  Nineteen Eighty Four     9   $4.25
6.  Alice in Wonderland      4   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
4
How many would you like to purchase?
1
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   6   $5.65
4.  The Great Gatsby         1   $1.55
5.  Nineteen Eighty Four     9   $4.25
6.  Alice in Wonderland      4   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
5
How many would you like to purchase?
6
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   6   $5.65
4.  The Great Gatsby         1   $1.55
5.  Nineteen Eighty Four     3   $4.25
6.  Alice in Wonderland      4   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
6
How many would you like to purchase?
1
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   6   $5.65
4.  The Great Gatsby         1   $1.55
5.  Nineteen Eighty Four     3   $4.25
6.  Alice in Wonderland      3   $2.75
7.  Great Expectations       9   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
7
How many would you like to purchase?
2
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   6   $5.65
4.  The Great Gatsby         1   $1.55
5.  Nineteen Eighty Four     3   $4.25
6.  Alice in Wonderland      3   $2.75
7.  Great Expectations       7   $3.25
8.  The Catcher in the Rye   2   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
8
How many would you like to purchase?
1
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   6   $5.65
4.  The Great Gatsby         1   $1.55
5.  Nineteen Eighty Four     3   $4.25
6.  Alice in Wonderland      3   $2.75
7.  Great Expectations       7   $3.25
8.  The Catcher in the Rye   1   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
9
How many would you like to purchase?
0
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   6   $5.65
4.  The Great Gatsby         1   $1.55
5.  Nineteen Eighty Four     3   $4.25
6.  Alice in Wonderland      3   $2.75
7.  Great Expectations       7   $3.25
8.  The Catcher in the Rye   1   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                1   $1.15
10
How many would you like to purchase?
1
Welcome to Alex's Online Book Store!
Enter the item number of the books you'd like to add to your cart!
You can always enter 0 to checkout.

   Book Name ~ Amount Stocked ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             6   $3.25
2.  Moby Dick                1   $2.55
3.  Hamlet                   6   $5.65
4.  The Great Gatsby         1   $1.55
5.  Nineteen Eighty Four     3   $4.25
6.  Alice in Wonderland      3   $2.75
7.  Great Expectations       7   $3.25
8.  The Catcher in the Rye   1   $2.15
9.  The Grapes of Wrath      4   $1.75
10. The Bible                0   $1.15
0
Your Cart:
   Book Name ~ Amount Bought ~ Price
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.  Harry Potter             2   $3.25
2.  Moby Dick                2   $2.55
3.  Hamlet                   2   $5.65
4.  The Great Gatsby         1   $1.55
5.  Nineteen Eighty Four     6   $4.25
6.  Alice in Wonderland      1   $2.75
7.  Great Expectations       2   $3.25
8.  The Catcher in the Rye   1   $2.15
9.  The Grapes of Wrath      0   $1.75
10. The Bible                1   $1.15
Total Amount: $62.5

*/