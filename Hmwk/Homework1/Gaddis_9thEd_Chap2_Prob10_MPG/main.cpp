/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 27, 2022, 12:12 PM
 * Purpose: MPG Problem
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
    unsigned short mlsRng; //Range of miles
               
    unsigned char  mpg, //Miles Per Gallon
                 nGlns; //Number of gallons
    
    //Initialize Variables
    mlsRng=375; //Range of 375 miles
    nGlns=15; //Gallons of gas tank can hold
            
    
    //Map inputs to outputs -> The Process
    mpg=mlsRng/nGlns;
    
    //Display Results
    cout<<static_cast<int>(mpg)<<"mpg = "
            <<mlsRng<<"Rang of Miles / "
            <<static_cast<int>(nGlns)<<" Number of gallons"<<endl;
    
    
    //Exit Stage Right
    return 0;
}

