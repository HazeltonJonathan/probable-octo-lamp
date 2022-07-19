/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 12, 2022, 12:40 PM
 * Purpose: C++ - Template to be used in all future Assignments
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float           pckgA=9.95,
                    pckgB=14.95,
                    pckgC=19.95,
                    hrs,
                    mxhrs,
                    bill;
                    
    char            pckg;
                    
                    
                
                    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
   
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pckg;
    cin>>hrs;
    // pckgB=14.95+((hrs-20)*1);
    while (hrs > 744)
    {
        cout<<"ERROR: 744 is the maximum hours, please enter a different value.";
        cin>>hrs;
    }
    
    switch (pckg)
    {
        case 'a': 
        case 'A':
            if (hrs >=10)
                {
                    bill=pckgA+((hrs-10)*2);
                }
            else
                {
                  bill=pckgA;
                };
            
            break;
            
        case 'b':
        case 'B': 
            if (hrs >=20)
                {
                    bill=pckgB+((hrs-20)*1);
                }
            else
                {
                  bill=pckgB;
                };
                    
            break;
            
        case 'c':
        case 'C':
            bill=pckgC;
            break;    
            
        default: cout<<"That is an invalid choice."<<endl;     
    }

    //Display the outputs
    cout<<"Bill = $ "<<bill;
    //Exit stage right or left!
    return 0;
}