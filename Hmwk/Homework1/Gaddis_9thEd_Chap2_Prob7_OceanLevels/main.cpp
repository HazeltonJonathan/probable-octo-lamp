/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 30, 2022, 10:41 AM
 * Purpose: Annual Pay Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float       oclvl, //Ocean Level Rising 1.5 millimeters per year
                fyrs, //Ocean level risen over 5 years
                syrs, //Ocean level risen over 7 years
                tyrs; //Ocean level risen over 10 years
    
    //Initialize Variables
    oclvl=1.5e0f; //1.5 millimeters
    
    
    
    //Map inputs to outputs -> The Process
    fyrs=oclvl*5;
    syrs=oclvl*7;
    tyrs=oclvl*10;
    
    //Display Results
    cout<<"Ocean Level After 5 Years = "<<fyrs<<endl;
    cout<<"Ocean Level After 7 Years = "<<syrs<<endl;
    cout<<"Ocean Level After 10 Years = "<<tyrs<<endl;
   
    
    //Exit Stage Right
    return 0;
}

