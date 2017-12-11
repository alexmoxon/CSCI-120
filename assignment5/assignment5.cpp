//Created By: Alex Moxon
//Created On: 12/5/2017
/*This program takes in the name and size of the ten most populated cities in the 
uUnited States. It then randomly selects one of the cities for you to guess the population 
of. If correct, you get a point. If you get ten points (all of them correct) you win!*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

class Compare {
    
    public:
    
    Compare();
    
    void Print() const;
    
    void SetName(string city_name[]);
    void SetPopulation(string pop_size[]);
    
    string GetName() const;
    string GetPopulation() const;
    
    private:
    
    int i;
    
    string city_names[];
    string pop_sizes[];
    
};


void Compare::Print() const {
    
   for (int i = 0; i < 12; i++) {
        
        cout << city_names[i] << " " << pop_sizes[i] << endl;
    }
    
}


Compare::Compare() {
    
    city_names[i] = " ";
    pop_sizes[i] = " ";
    
    return;
    
}


void Compare::SetName(string city_name[]) {
    
    city_names[i] = city_name[i];
    
}


string Compare::GetName() const {
    
    return city_names[i];
    
}



void Compare::SetPopulation(string pop_size[]) {
    
    pop_sizes[i] = pop_size[i];
}



string Compare::GetPopulation() const {
    
    return pop_sizes[i];
    
}




int main() {
    
    Compare city1;
    
    ifstream inFS;
    
    const int NAME = 12;
    
    string user_guess;
    string city[NAME];
    
    string pop[NAME];
    
    inFS.open("population.txt");
    
    if (!inFS.is_open()) {
        
        cout << "Couldn't find file, please try again." << endl;
        
        return 1;
    }
    
    else {
        
        cout << "File: population.txt is opened" << endl;
        
    }
    
   for (int i = 0; i < NAME; i++) {
        
        getline (inFS, city[i], ':');
        getline (inFS, pop[i], ' ');
        
    }
    
    /*for (int i = 0; i < NAME; i++) {
        
        cout << city[i] << " " << pop[i] << endl;
    }
    
    */
    
    inFS.close();
    
  return 0;
}