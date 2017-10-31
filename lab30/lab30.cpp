//Created By: Alex Moxon
//Created On: 10/26/2017
/*Program that emulates Hi Ho! Cherry-O game. The user plays against a computer
to see who can fill up their basket with 10 cherries first.  The player and computer
take turns spinning (random number generator) in which they can lose cherries or gain
cherries for their basket. The first to 10 cherries wins.*/

#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;

class Computer { //Class that is used for the computer player
    
    public:

    void SetTree(int cherries_on_tree); //Mutator
    int const GetTree(); //Accessor 
    
    void SetCherries(int cherries_in_basket); //Mutator
    int const GetCherries(); //Accessor
    
    private:
    //private class variables
    int tree_;
    int basket_;
    
};
//Function that sets the # of cherries on computers tree
void Computer::SetTree(int cherries_on_tree) {
    
    tree_ = cherries_on_tree;
    return;
}
//Function that gets the # of cherries on computer tree
int const Computer::GetTree() {
    
    return tree_;
}
//Function that sets the # of cherries in the computers basket
void Computer::SetCherries(int cherries_in_basket) {
    
    basket_ = cherries_in_basket;
    return;
}
//Function that gets the # of cherries in the computers basket
int const Computer::GetCherries() {
    
    return basket_;
}


int main() {
    
    Computer computer1; //Initializes computer class
    computer1.SetCherries(0); //Sets # of cherries in computers basket
    computer1.SetTree(10); //Sets # of cherries on computers tree
    
    srand(time(0)); //Seed for current time
    
    int player_tree = 10; //Sets # of cherries on players tree
    int player_basket = 0; //Sets # of cherries in players basket
    
    int spin = 0; //Variable for spin
    int number_turns = 0; //variable which incriments to track turns
    
    cout << "Hi Ho! Cherry-O!" << endl; //Start of Game
    cout << "Whoever collects 10 cherries first wins!" << endl;
    cout << endl;
    cout << "*****************************************" << endl;
    
    while ((computer1.GetCherries() <= 10) && (player_basket <= 10)) { //Main loop which repeats until 10 cherries are in basket
        
        if (number_turns % 2 == 0) { //modulo # to determine whos turn it is
            
            cout << endl;
            cout << "You're up! Press enter to spin!"; //Spinning for random #
            cin.ignore();
        
        
        spin = rand() % 7 + 1;  //Random # generator between 1 - 7
        
        cout << "You spun a : " << spin << endl; //Tells player what he spun
        
        switch (spin) { //Switch statement that is determined by random # generated
            
            case 1:
            cout << "Take one cherry from the tree" << endl;
            player_tree = player_tree - 1;
            player_basket = player_basket + 1;
            break;
            
            case 2:
            cout << "Take two cherries from the tree" << endl;
            player_tree = player_tree - 2;
            player_basket = player_basket + 2;
            break;
            
            case 3:
            cout << "Take three cherries from the tree" << endl;
            player_tree = player_tree - 3;
            player_basket = player_basket + 3;
            break;
            
            case 4:
            cout << "Take four cherries from the tree" << endl;
            player_tree = player_tree - 4;
            player_basket = player_basket + 4;
            break;
            
            case 5:
            cout << "DOG!" << endl;
            
            if (player_basket >= 2) { //If else statement that is determined by players current amount of cherries in bucket
                
                player_basket = player_basket - 2;
                player_tree = player_tree +2;
                
            }
            
            else if (player_basket == 1) {
                
                player_basket = player_basket  - 1;
                player_tree = player_tree + 1;
                
            }
            else {
                player_basket = 0;
                player_tree = 10;
            }
            
            case 6:
            break;
            
            case 7:
            cout << "YA DUN GOOFED & SPILT THE BASKET!" << endl;
            player_basket = 0;
            player_tree = 10;
            break;
        }
    }
        
        else if (number_turns % 2 == 1) { //Computers turn
            cout << endl;
            cout << "It's the computers turn!" << endl;
            
            spin = rand() % 7 + 1;
            
            cout << "The computer spun a : " << spin << endl;
            
            switch (spin) { //Computer switch statement that is determined by random #
                
            case 1:
            cout << "Take one cherry from the tree" << endl;
            computer1.SetTree(computer1.GetTree() - 1);
            computer1.SetCherries(computer1.GetCherries() + 1);
            break;
            
            case 2:
            cout << "Take two cherries from the tree" << endl;
            computer1.SetTree(computer1.GetTree() - 2);
            computer1.SetCherries(computer1.GetCherries() + 2);
            break;
            
            case 3:
            cout << "Take three cherries from the tree" << endl;
            computer1.SetTree(computer1.GetTree() - 3);
            computer1.SetCherries(computer1.GetCherries() + 3);
            break;
            
            case 4:
            cout << "Take four cherries from the tree" << endl;
            computer1.SetTree(computer1.GetTree() - 4);
            computer1.SetCherries(computer1.GetCherries() + 4);
            break;
            
            case 5:
            cout << "DOG!" << endl;
            
            if (computer1.GetCherries() >= 2) {
                
                computer1.SetCherries(computer1.GetCherries() - 2);
                computer1.SetTree(computer1.GetTree() + 2);
            }
            
            else if (computer1.GetCherries() == 1) {
                
                computer1.SetCherries(computer1.GetCherries() - 1);
                computer1.SetTree(computer1.GetTree() + 1);
            }
            else {
                computer1.SetCherries(0);
                computer1.SetTree(10);
            }
            
            case 6:
            break;
            
            case 7:
            cout << "YA DUN GOOFED & SPILT THE BASKET!" << endl;
            computer1.SetCherries(0);
            computer1.SetTree(10);
            break;
            }
        }
        number_turns++; //Increments turn so that players switch
        
        cout << endl;
        cout << "You have : " << player_basket << " Cherries!" << endl;
        cout << "Computer has : " << computer1.GetCherries() << " Cherries!" << endl;
    }
    
    if (player_basket >= 10) { //Prints who won and ends the game
        
        cout << "Congrats! You Win!" << endl;
    }
    
    else {
        
        cout << "The Computer won! :( " << endl;
        
    }

    return 0;
}

/*

Win:

Hi Ho! Cherry-O!
Whoever collects 10 cherries first wins!

*****************************************

You're up! Press enter to spin!
You spun a : 1
Take one cherry from the tree

You have : 1 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 4
Take four cherries from the tree

You have : 1 Cherries!
Computer has : 4 Cherries!

You're up! Press enter to spin!
You spun a : 5
DOG!

You have : 0 Cherries!
Computer has : 4 Cherries!

It's the computers turn!
The computer spun a : 6

You have : 0 Cherries!
Computer has : 4 Cherries!

You're up! Press enter to spin!
You spun a : 1
Take one cherry from the tree

You have : 1 Cherries!
Computer has : 4 Cherries!

It's the computers turn!
The computer spun a : 5
DOG!

You have : 1 Cherries!
Computer has : 2 Cherries!

You're up! Press enter to spin!
You spun a : 6

You have : 1 Cherries!
Computer has : 2 Cherries!

It's the computers turn!
The computer spun a : 7
YA DUN GOOFED & SPILT THE BASKET!

You have : 1 Cherries!
Computer has : 0 Cherries!

You're up! Press enter to spin!
You spun a : 1
Take one cherry from the tree

You have : 2 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 6

You have : 2 Cherries!
Computer has : 0 Cherries!

You're up! Press enter to spin!
You spun a : 3
Take three cherries from the tree

You have : 5 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 6

You have : 5 Cherries!
Computer has : 0 Cherries!

You're up! Press enter to spin!
You spun a : 3
Take three cherries from the tree

You have : 8 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 7
YA DUN GOOFED & SPILT THE BASKET!

You have : 8 Cherries!
Computer has : 0 Cherries!

You're up! Press enter to spin!
You spun a : 6

You have : 8 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 3
Take three cherries from the tree

You have : 8 Cherries!
Computer has : 3 Cherries!

You're up! Press enter to spin!
You spun a : 1
Take one cherry from the tree

You have : 9 Cherries!
Computer has : 3 Cherries!

It's the computers turn!
The computer spun a : 4
Take four cherries from the tree

You have : 9 Cherries!
Computer has : 7 Cherries!

You're up! Press enter to spin!
You spun a : 2
Take two cherries from the tree

You have : 11 Cherries!
Computer has : 7 Cherries!
Congrats! You Win!


Loss:

Hi Ho! Cherry-O!
Whoever collects 10 cherries first wins!

*****************************************

You're up! Press enter to spin!
You spun a : 4
Take four cherries from the tree

You have : 4 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 6

You have : 4 Cherries!
Computer has : 0 Cherries!

You're up! Press enter to spin!
You spun a : 4
Take four cherries from the tree

You have : 8 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 6

You have : 8 Cherries!
Computer has : 0 Cherries!

You're up! Press enter to spin!
You spun a : 6

You have : 8 Cherries!
Computer has : 0 Cherries!

It's the computers turn!
The computer spun a : 4
Take four cherries from the tree

You have : 8 Cherries!
Computer has : 4 Cherries!

You're up! Press enter to spin!
You spun a : 1
Take one cherry from the tree

You have : 9 Cherries!
Computer has : 4 Cherries!

It's the computers turn!
The computer spun a : 4
Take four cherries from the tree

You have : 9 Cherries!
Computer has : 8 Cherries!

You're up! Press enter to spin!
You spun a : 7
YA DUN GOOFED & SPILT THE BASKET!

You have : 0 Cherries!
Computer has : 8 Cherries!

It's the computers turn!
The computer spun a : 4
Take four cherries from the tree

You have : 0 Cherries!
Computer has : 12 Cherries!
The Computer won! :( 

*/