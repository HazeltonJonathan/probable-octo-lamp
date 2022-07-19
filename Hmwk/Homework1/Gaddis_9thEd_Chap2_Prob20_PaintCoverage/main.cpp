/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 27, 2022, 11:21 AM
 * Purpose: Paint Problem - How Many Gallons For Double Coverage
 *          And Both Sides Of The Fence
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
    float pCvg, //Coverage of a gallon of paint in feet^2
          fncHgt, //Fence height in feet
          fncLng; //Fence length in feet
    int nGlns; //Number of gallons of paint required      
    
    //Initialize Variables
    pCvg=3.4e2f; //340 square feet 
    fncHgt=6.0e0f; //6 Feet high fence
    fncLng=1.0e2f; //100 Feet long fence
    
    //Map inputs to outputs -> The Process
    float srfAra=fncHgt*fncLng; //Surface area of one side of fence
    float srfCov=4*srfAra; //Need to paint both sides twice
    nGlns=srfCov/pCvg+1; //Integer number of gallons of paint
    
    //Display Results
    cout<<"Fence Height = "<<fncHgt<<" Feet"<<endl;
    cout<<"Fence Length = "<<fncLng<<" Feet"<<endl;
    cout<<"Paint Coverage = "<<pCvg<<" Feet^2"<<endl;
    cout<<"Number of Gallons = "<<nGlns<<" gallons"<<endl;
    
    //Exit Stage Right
    return 0;
}

