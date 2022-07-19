/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 30, 2022, 10:49 AM
 * Purpose: Total Purchase Problem
 */

//System Libraries
#include <iostream>
#include <iomanip> //Added this during lab to fix decimal points
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
    float          item1, //Price of Item 1 $15.95
                   item2, //Price of Item 2 $24.95
                   item3, //Price of Item 3 $6.95
                   item4, //Price of Item 4 $12.95
                   item5, //Price of Item 5 $3.95  
                   slstx; //Sales Tax 7%
    
    float          sbttl, //Subtotal before tax
                   cslstx, //Cost of sales tax
                   ttlcst; //Total after tax
    
    //Initialize Variables
    item1=15.95; //Price of Item 1 $15.95
    item2=24.95; //Price of Item 2 $24.95
    item3=6.95; //Price of Item 3 $6.95
    item4=12.95; //Price of Item 4 $12.95
    item5=3.95; //Price of Item 5 $3.95 
    slstx=7; //Sales Tax 7%
    
    //Map inputs to outputs -> The Process
    sbttl=item1+item2+item3+item4+item5;
    cslstx=sbttl*slstx/PERCENT;
    ttlcst=sbttl+cslstx;
    
    //Display Results
    cout<<"Price of item 1 = $"<<item1<<endl;
    cout<<"Price of item 2 = $"<<item2<<endl;
    cout<<"Price of item 3 = $"<<item3<<endl;
    cout<<"Price of item 4 = $"<<item4<<endl;
    cout<<"Price of item 5 = $"<<item5<<endl;
    cout<<"Subtotal = $"<<sbttl<<endl;
    cout<<"Sales Tax = $"<<cslstx<<endl;
    cout<<"Total = $"<<fixed<<setprecision(2)<<ttlcst<<endl;
    
    //Exit Stage Right
    return 0;
}

