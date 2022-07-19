/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 30, 2022, 11:25 AM
 * Purpose: Land Calculation Problem
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
    float       acrlnd, //1 Acre of land is 43,560 feet
                trctln, //391,876 feet in tract of land
                ttlacr; //Total Acres in tract of land
               
    
    
    //Initialize Variables
    acrlnd=4.356e4f; //1 Acre of land is 43,560 feet
    trctln=3.91876e5f; //391,876 feet in tract of land
    
    
    //Map inputs to outputs -> The Process
   ttlacr=trctln/acrlnd;
    
    //Display Results
    cout<<"Acres of land in tract = "<<ttlacr<<endl;
   
    
    //Exit Stage Right
    return 0;
}

