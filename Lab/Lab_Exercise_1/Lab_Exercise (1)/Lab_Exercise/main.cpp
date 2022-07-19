/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 29, 2022, 11:09 AM
 * Purpose: Lab Exercise Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const unsigned char PERCENT=100; //Conversion to percentage

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float          gs1Pric, //Gas Station One Price
                   gsGau, //Gas Gauge Percent
                   gs2Pric, //Gas Station Two Price gsGau, //Gas Gauge Percent
                   gs1Cst, //Cost to fill up at Gas Station One
                   gs1Dri, //Cost to Drive to Gas Station One
                   gs1Ttl, //Total cost for Gas Station One
                   glnReq, //Number of Gallons Needed to fill up
                   gs1Ppg, //Total cost per gallon at Gas Station One
                   gs2Cst, //Cost to fill up at Gas Station Two
                   gs2Dri, //Cost to Drive to Gas Station Two
                   gs2Ttl, //Total cost for Gas Station Two
                   gs2Ppg; //Total cost per gallon at Gas Station Two
                                             
    unsigned short            tnkSze, //Size of tank in Gallons
                   mpg, //Miles per Gallon
                   mlsGs1, //Miles to Gas Station One
                   mlsGs2, //Miles to Gas Station Two  
                   disGs1, //Round Trip to Gas Station One
                   disGs2; //Round Trip to Gas Station Two
                   
            
    //Initialize Variables
    gsGau=25; //75 Percent (25 Percent Empty)
    gs1Pric=4.25; //Gas Station One Price $4.25
    gs2Pric=4.09; //Gas Station Two Price $4.09
    tnkSze=22; //Size of tank 22 Gallons
    mpg=17; //17 Miles per Gallon
    mlsGs1=10; //10 Miles to Gas Station One 
    mlsGs2=20; //20 Miles to Gas Station Two
    disGs1=20; //20 miles round trip to Gas Station One
    disGs2=40; //40 Miles round trip to Gas Station Two
    
    
    //Map inputs to outputs -> The Process
    glnReq=gsGau/PERCENT*tnkSze;
    gs1Cst=glnReq*gs1Pric;               //Cost to fill up at Gas Station One
    gs1Dri=gs1Pric*disGs1/mpg;           //Cost round trip to Gas Station One 
    gs1Ttl=gs1Cst+gs1Dri;                //Total Cost to fill up at Gas Station One   
    gs1Ppg=gs1Ttl/glnReq;                //Total Price Per Gallon at Gas Station One
    gs2Cst=glnReq*gs2Pric;               //Cost to fill up at Gas Station Two
    gs2Dri=gs2Pric*disGs2/mpg;           //Cost round trip to Gas Station Two 
    gs2Ttl=gs2Cst+gs2Dri;                //Total Cost to fill up at Gas Station Two
    gs2Ppg=gs2Ttl/glnReq;                //Total Price Per Gallon at Gas Station Two
    
    //Display Results
    cout<<"Number of gallons required = $"<<glnReq<<endl;
    cout<<"Gas Station One Cost = $"<<gs1Cst<<endl;
    cout<<"Cost to drive to Gas Station 1 = $"<<gs1Dri<<endl;
    cout<<"Total Cost for Gas Station 1 = $"<<gs1Ttl<<endl;
    cout<<"Total Cost Per Gallon at Gas Station 1 = $"<<gs1Ppg<<endl;
    cout<<"Gas Station 2 Cost = $"<<gs2Cst<<endl;
    cout<<"Cost to drive to Gas Station 2 = $"<<gs2Dri<<endl;
    cout<<"Total Cost for Gas Station 1 = $"<<gs2Ttl<<endl;
    cout<<"Total Cost Per Gallon at Gas Station 2 = $"<<gs2Ppg<<endl;
    
    //Exit Stage Right
    return 0;
}

