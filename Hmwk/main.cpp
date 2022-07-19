/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 30, 2022, 10:34 AM
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
    float       pyamnt, //Pay Amount $2200 every 2 weeks
                pyprd, //Pay Periods of 26 per year
                annlpy; //Annual Pay
    
    
    //Initialize Variables
    pyamnt=2.2e3f; //$2,200
    pyprd=2.6e1f; //26 Pay Periods
    
    
    //Map inputs to outputs -> The Process
   annlpy=pyamnt*pyprd;
    
    //Display Results
    cout<<"Annual Pay = $"<<annlpy<<endl;
   
    
    //Exit Stage Right
    return 0;
}

