//Created By: Alex Moxon
//Created On: 10/9/2017
/*Program takes amount of smart/dumb phones, data, and tablets entered. Then based on amount
of data wanted, program outputs cheapest plan for them.*/

#include<iostream>
#include<cmath>
using namespace std;

int main() { //main function
    int smartPhone = 0; //Variables taken from user
    int dumbPhone = 0;
    int tablet = 0;
    int data = 0;
    
    cout << "Enter the Number of Smart Phones you'll be getting: " << endl; //Gets amount of smart phones user wants
    cin >> smartPhone;
    
    cout << "Enter the Number of dumb Phones you'll be getting: " << endl; //Gets amount of dumb phones user wants
    cin >> dumbPhone;
    
    cout << "Enter the Number of Tablets you'll be getting: " << endl; //Gets amount of tablets user wants
    cin >> tablet;
    
    cout << "Enter how many GB of data you'll be using: " << endl; //Gets how many GB of data user wants
    cin >> data;
    
    //Begginning of if else branch, that runs off of amount of data wanted by user
    if (data == 0) { //If data is 0, this is the best plan
        cout << "ATT Family Plan";
    }
    
    else if (data <= 2 && tablet == 0 && dumbPhone == 0) { //If data wanted is 2GB or lower, this is the best plan
        cout << "Sprint 2GB Plan";
    }
    else {                                      //If data is anything larger than 2GB, ATT Unlimited is the best plan
        cout << "ATT Unlimited Choice Plan";
    }

    return 0;
}

/*
Enter the Number of Smart Phones you'll be getting: 
2
Enter the Number of dumb Phones you'll be getting: 
0
Enter the Number of Tablets you'll be getting: 
0
Enter how many GB of data you'll be using: 
5
ATT Unlimited Choice Plan


Enter the Number of Smart Phones you'll be getting: 
2
Enter the Number of dumb Phones you'll be getting: 
1
Enter the Number of Tablets you'll be getting: 
1
Enter how many GB of data you'll be using: 
15
ATT Unlimited Choice Plan


Enter the Number of Smart Phones you'll be getting: 
0
Enter the Number of dumb Phones you'll be getting: 
1
Enter the Number of Tablets you'll be getting: 
0
Enter how many GB of data you'll be using: 
0
ATT Family Plan


Enter the Number of Smart Phones you'll be getting: 
1
Enter the Number of dumb Phones you'll be getting: 
0
Enter the Number of Tablets you'll be getting: 
0
Enter how many GB of data you'll be using: 
2
Sprint 2GB Plan
*/