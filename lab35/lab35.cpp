/* Created By: Alex Moxon
 * Created On: 10/25/2017
 * This program creates a class that converts temperatures between Kelvin, Fahrenheit and Celsius.
 * It always internally stores the value in kelvin_ & converts with that.
 */
 
#include<iostream>
using namespace std;
//Class to implement temperature object
class TemperatureConverter {
    
    public:
    //Functions to calculate temperature
    void SetTempFromKelvin(double temp);
    double GetTempFromKelvin() const;
    
    void SetTempFromCelsius(double temp);
    double GetTempAsCelsius() const;
    
    void SetTempFromFahrenheit(double temp);
    double GetTempAsFahrenheit() const;
    
    void PrintTemperatures() const;
    
    //Constructors
    TemperatureConverter();
    TemperatureConverter(double temp);
    
    private:
    //Instance variable
    double kelvin_;

};

    //Default Constructor
    TemperatureConverter::TemperatureConverter() {
        
        kelvin_ = 0;
    }
    
    //Overloaded Constructor
    TemperatureConverter::TemperatureConverter(double temp) {
        
        kelvin_ = temp;
    }
    
    //Mutator to set Kelvin Temp
    void TemperatureConverter::SetTempFromKelvin(double temp) {
        
        kelvin_ = temp;
    }
    
    //Accessor to get Kelvin Temp
    double TemperatureConverter::GetTempFromKelvin() const {
        
        return kelvin_;
    }
    
    //Mutator to set Celsius Temp
    void TemperatureConverter::SetTempFromCelsius(double temp) {
       
       kelvin_ = temp + 273.15;
    }
    
    //Accessor to get Celsius Temp
    double TemperatureConverter::GetTempAsCelsius() const {
        
        return kelvin_ - 273.15;
    }
    
    //Mutator to set Fahrenheit Temp
    void TemperatureConverter::SetTempFromFahrenheit(double temp) {
        
        SetTempFromCelsius((temp - 32.0 ) * 5.0 / 9.0);
    }
    
    //Accessor to get Fahrenheit Temp
    double TemperatureConverter::GetTempAsFahrenheit() const {
        
        return 9.0 * GetTempAsCelsius() / 5.0 + 32.0;
    }
    //Print Function that outputs three different versions of Temp
    void TemperatureConverter::PrintTemperatures() const {
        cout << "Kelvin: " << GetTempFromKelvin() << endl;
        cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl;
        cout << "Celsius: " << GetTempAsCelsius() << endl;
        return;
    }
    


int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}

/*

Kelvin: 0
Fahrenheit: -459.67
Celsius: -273.15
Kelvin: 274
Fahrenheit: 33.53
Celsius: 0.85
400.15
Kelvin: 400.15
Fahrenheit: 260.6
Celsius: 127
32
Kelvin: 305.15
Fahrenheit: 89.6
Celsius: 32
32
Kelvin: 273.15
Fahrenheit: 32
Celsius: 0

*/