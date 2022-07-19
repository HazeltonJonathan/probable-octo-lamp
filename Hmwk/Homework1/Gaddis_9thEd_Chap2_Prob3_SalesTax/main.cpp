/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 30, 2022, 10:07 AM
 * Purpose: Sales Tax Problem
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
    float          prchs, //$95 Purchase Price
                   stsltx, //State Sales Tax 4%
                   cnsltx; //County Sales Tax 2%
    
    float          sttxcst, //Cost of State Sales Tax
                   cntxcst, //Cost of County Sales Tax
                   ttlcst; //Total cost after tax
    
    //Initialize Variables
    prchs=95; //$95
    stsltx=4; //4 Percent
    cnsltx=2; //2 Percent
    
    //Map inputs to outputs -> The Process
    sttxcst=prchs*stsltx/PERCENT;
    cntxcst=prchs*cnsltx/PERCENT;
    ttlcst=prchs-sttxcst-cntxcst;
    
    //Display Results
    cout<<"Cost of State Sales Tax = $"<<sttxcst<<endl;
    cout<<"Cost of Count Sales Tax = $"<<cntxcst<<endl;
    cout<<"Total Cost After Tax = $"<<ttlcst<<endl;
    
    
    //Exit Stage Right
    return 0;
}

