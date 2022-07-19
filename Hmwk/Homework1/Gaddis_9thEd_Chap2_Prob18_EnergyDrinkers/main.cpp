/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 27, 2022, 12:12 PM
 * Purpose: Energy Drink Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const unsigned char PERCENT=100; //Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short cstSrvy, //Number of customers surveyed
                   nEndr, //Number of Energy Drinkers
                   nCit; //Number of Citrus Drinkers
    unsigned char  prcEndr, //Percent of Energy Drinkers
                   prcCit; //Percent of Citrus Drinkers
    
    //Initialize Variables
    cstSrvy=16500; //16500
    prcEndr=15; //15 Percent
    prcCit=58; //58 Percent
    
    //Map inputs to outputs -> The Process
    nEndr=cstSrvy*prcEndr/PERCENT;
    nCit=nEndr*prcCit/PERCENT;
    
    //Display Results
    cout<<"Number of Customers that use Energy Drinks = "<<nEndr<<endl;
    cout<<"Number of Customers that prefer Citrus Drinks = "<<nCit<<endl;
    
    
    //Exit Stage Right
    return 0;
}

