/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on June 30, 2022, 10:20 AM
 * Purpose: Restaurant Bill Problem
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
    float          bill, //$88.67 Meal
                   tax, //Tax 6.75%
                   tip; //Tip 20% After Tax is Added
    
    float          txcst, //Cost of tax
                   ttlwtx, //Cost with tax added
                   ttltip, //Tip amount
                   ttlcst; //Total after tax and tip
    
    //Initialize Variables
    bill=88.67; //$88.67
    tax=6.75; //6.75 Percent
    tip=20; //20 Percent
    
    //Map inputs to outputs -> The Process
    txcst=bill*tax/PERCENT;
    ttlwtx=txcst+bill;
    ttltip=ttlwtx*tip/PERCENT;
    ttlcst=ttlwtx+ttltip;
    
    //Display Results
    cout<<"Meal Cost = $"<<txcst<<endl;
    cout<<"Tax Amount = $"<<ttlwtx<<endl;
    cout<<"Tip Amount = $"<<ttltip<<endl;
    cout<<"Total Bill = $"<<ttlcst<<endl;
    
    
    //Exit Stage Right
    return 0;
}

