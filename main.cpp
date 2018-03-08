/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: haley
 *
 * Created on March 2, 2018, 10:30 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main() {
    
    string userInputUnit;
    string toConvertTo;
    double newMetricNum;
    double newImperialNum;
    
    cout << "What type of number would you like to convert? Input 'metric' or 'imperial': " << endl;
    cin >> userInputUnit;
    
    // This branch will execute if user wants to input a METRIC number
    if (userInputUnit == "metric") {
        string convertMetricTo;
        string currentMetricUnit;
        double currentMetricNum;
        cout << "What unit is your number currently in? Input 'meters', 'centimeters', 'millimeters', 'kilometers': " << endl;
        cin >> currentMetricUnit;
        cout << "Would you like to convert to another metric unit or an imperial unit? Input 'metric' or 'imperial': " << endl;
        cin >> toConvertTo;
        
        // To convert from METRIC to another METRIC
        if (toConvertTo == "metric") {
            cout << "Which metric unit would you like to convert your number to? Input 'meters', 'centimeters', 'millimeters', 'kilometers': " << endl;
            cin >> convertMetricTo;
            cout << "Enter the number in " << currentMetricUnit << " to be converted: " << endl;
            cin >> currentMetricNum;
            
            // Branch to convert METERS to another metric unit
            if (currentMetricUnit == "meters") {
                
                if (convertMetricTo == "millimeters") {
                    newMetricNum = currentMetricNum * 1000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "centimeters") {
                    newMetricNum = currentMetricNum * 100;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "kilometers") {
                    newMetricNum = currentMetricNum / 1000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "meters") {
                    cout << "Number is already in " << convertMetricTo << "!" << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
            // Branch to convert MILLIMETERS to another metric unit
            else if (currentMetricUnit == "millimeters") {
                
                if (convertMetricTo == "meters") {
                    newMetricNum = currentMetricNum / 1000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "centimeters") {
                    newMetricNum = currentMetricNum / 10;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "kilometers") {
                    newMetricNum = currentMetricNum / 1000000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "millimeters") {
                    cout << "Number is already in " << convertMetricTo << "!" << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }   
            }
            // Branch to convert CENTIMETERS to another metric unit
            else if (currentMetricUnit == "centimeters") {
                
                if (convertMetricTo == "millimeters") {
                    newMetricNum = currentMetricNum * 10;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "meters") {
                    newMetricNum = currentMetricNum / 100;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "kilometers") {
                    newMetricNum = currentMetricNum * 100000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "centimeters") {
                    cout << "Number is already in " << convertMetricTo << "!" << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                } 
            }
            // Branch to convert KILOMETERS to another metric unit
            else if (currentMetricUnit == "kilometers") {
                
                if (convertMetricTo == "millimeters") {
                    newMetricNum = currentMetricNum * 1000000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "centimeters") {
                    newMetricNum = currentMetricNum * 100000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "meters") {
                    newMetricNum = currentMetricNum * 1000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newMetricNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "kilometers") {
                    cout << "Number is already in " << convertMetricTo << "!" << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
        }
        
        // To convert from METRIC to IMPERIAL
        else if (toConvertTo == "imperial") {
            cout << "Which imperial unit would you like to convert your number to? Input 'inches', 'feet', 'yards', 'miles': " << endl;
            cin >> convertMetricTo;
            cout << "Enter the number in " << currentMetricUnit << " to be converted: " << endl;
            cin >> currentMetricNum;
            
            // To convert METERS to an imperial unit
            if (currentMetricUnit == "meters") {
                
                if (convertMetricTo == "inches") {
                    newImperialNum = currentMetricNum * 39.3701;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "feet") {
                    newImperialNum = currentMetricNum * 3.28084;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "yards") {
                    newImperialNum = currentMetricNum * 1.09361;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "miles") {
                    newImperialNum = currentMetricNum * 0.000621371;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
            // To convert MILLIMETERS to an imperial unit
            else if (currentMetricUnit == "millimeters") {
                
                if (convertMetricTo == "inches") {
                    newImperialNum = currentMetricNum * 0.0393701;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "feet") {
                    newImperialNum = currentMetricNum * 0.00328084;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "yards") {
                    newImperialNum = currentMetricNum * 0.00109361;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "miles") {
                    newImperialNum = (currentMetricNum * 0.000621371) / 1000;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }           
            // To convert CENTIMETERS to an imperial unit
            else if (currentMetricUnit == "centimeters") {
                
                if (convertMetricTo == "inches") {
                    newImperialNum = currentMetricNum * 0.3936996;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "feet") {
                    newImperialNum = currentMetricNum * 0.0328083;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "yards") {
                    newImperialNum = currentMetricNum * 0.0109361;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "miles") {
                    newImperialNum = (currentMetricNum * 0.000621371) / 100;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else {
                    cout << "Invalid input." << endl; 
                }
            }
            // To convert KILOMETERS to an imperial unit
            else if (currentMetricUnit == "kilometers") {
                
                if (convertMetricTo == "inches") {
                    newImperialNum = currentMetricNum * 39369.96;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "feet") {
                    newImperialNum = currentMetricNum * 3280.83;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "yards") {
                    newImperialNum = currentMetricNum * 1093.61;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else if (convertMetricTo == "miles") {
                    newImperialNum = currentMetricNum * 0.62136931818182;
                    cout << currentMetricNum << " " << currentMetricUnit << " = " << newImperialNum << " " << convertMetricTo << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
                
            }
        }  
            
        }
    
    // This branch will execute if user wants to input an IMPERIAL number
    else if (userInputUnit == "imperial") {
        string convertImperialTo;
        string currentImperialUnit;
        double currentImperialNum;
        cout << "What unit is your number currently in? Input 'inches', 'feet', 'yards', 'miles': " << endl;
        cin >> currentImperialUnit;
        cout << "Would you like to convert to another imperial unit or a metric unit? Input 'imperial' or 'metric': " << endl;
        cin >> toConvertTo;
        
         // To convert from IMPERIAL to another IMPERIAL
        if (toConvertTo == "imperial") {
            cout << "Which imperial unit would you like to convert your number to? Input 'inches', 'feet', 'yards', 'miles': " << endl;
            cin >> convertImperialTo;
            cout << "Enter the number in " << currentImperialUnit << " to be converted: " << endl;
            cin >> currentImperialNum;
            
            
            // Branch to convert INCHES to another imperial unit
            if (currentImperialUnit == "inches") {
                
                if (convertImperialTo == "feet") {
                    newImperialNum = currentImperialNum / 12;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "yards") {
                    newImperialNum = currentImperialNum / 36;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "miles") {
                    newImperialNum = currentImperialNum / 63360;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "inches") {
                    cout << "Number is already in " << currentImperialUnit << "!" << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
            // Branch to convert FEET to another imperial unit
            else if (currentImperialUnit == "feet") {
                
                if (convertImperialTo == "inches") {
                    newImperialNum = currentImperialNum * 12;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "yards") {
                    newImperialNum = currentImperialNum / 3;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "miles") {
                    newImperialNum = currentImperialNum / 5280;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "feet") {
                    cout << "Number is already in " << currentImperialUnit << "!" << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
            // Branch to convert YARDS to another imperial unit
            else if (currentImperialUnit == "yards") {
                
                if (convertImperialTo == "inches") {
                    newImperialNum = currentImperialNum * 36;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "feet") {
                    newImperialNum = currentImperialNum * 3;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "miles") {
                    newImperialNum = currentImperialNum / 1760;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "yards") {
                    cout << "Number is already in " << currentImperialUnit << "!" << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
            // Branch to convert MILES to another imperial unit
            else if (currentImperialUnit == "miles") {
                
                if (convertImperialTo == "inches") {
                    newImperialNum = currentImperialNum * 63360;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "feet") {
                    newImperialNum = currentImperialNum * 5280;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "yards") {
                    newImperialNum = currentImperialNum * 1760;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newImperialNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "miles") {
                    cout << "Number is already in " << currentImperialUnit << "!" << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
        }
        // To convert from IMPERIAL to a METRIC unit
        else if (toConvertTo == "metric") {
            cout << "Which metric unit would you like to convert your number to? Input 'millimeters', 'centimeters', 'meters', 'kilometers': " << endl;
            cin >> convertImperialTo;
            cout << "Enter the number in " << currentImperialUnit << " to be converted: " << endl;
            cin >> currentImperialNum;
            
            // Branch to convert INCHES to a metric unit
            if (currentImperialUnit == "inches") {
                
                if (convertImperialTo == "millimeters") {
                    newMetricNum = currentImperialNum * 25.4;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "centimeters") {
                    newMetricNum = currentImperialNum * 2.54;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "meters") {
                    newMetricNum = currentImperialNum * 0.0254;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "kilometers") {
                    newMetricNum = currentImperialNum * 0.0000254;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
            // Branch to convert FEET to a metric unit
            else if (currentImperialUnit == "feet") {
                
                if (convertImperialTo == "millimeters") {
                    newMetricNum = currentImperialNum * 304.8;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "centimeters") {
                    newMetricNum = currentImperialNum * 30.48;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "meters") {
                    newMetricNum = currentImperialNum * 0.3048;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "kilometers") {
                    newMetricNum = currentImperialNum * 0.0003048;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
            // Branch to convert YARDS to a metric unit
            else if (currentImperialUnit == "yards") {
                
                if (convertImperialTo == "millimeters") {
                    newMetricNum = currentImperialNum * 914.4;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "centimeters") {
                    newMetricNum = currentImperialNum * 91.44;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "meters") {
                    newMetricNum = currentImperialNum * 0.9144;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "kilometers") {
                    newMetricNum = currentImperialNum * 0.0009144;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
            // Branch to convert MILES to a metric unit
            else if (currentImperialUnit == "miles") {
                
                if (convertImperialTo == "millimeters") {
                    newMetricNum = currentImperialNum * 1609000;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "centimeters") {
                    newMetricNum = currentImperialNum * 160934;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "meters") {
                    newMetricNum = currentImperialNum * 1609.34;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else if (convertImperialTo == "kilometers") {
                    newMetricNum = currentImperialNum * 1.60934;
                    cout << currentImperialNum << " " << currentImperialUnit << " = " << newMetricNum << " " << convertImperialTo << endl;
                }
                else {
                    cout << "Invalid input." << endl;
                }
            }
        }
    }
    
    else {
        cout << "User input is invalid." << endl;
    }
    
    
    return 0;
}

