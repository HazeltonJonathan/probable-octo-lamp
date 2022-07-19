/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 7, 2022, 7:38 PM
 * Purpose: C++ - Template to be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float           prcntGt, //Total percent of gas tax on gallon of gas
                    csttx, //Total cost of tax per gallon
                    ttlprft,  //Profit made from a gallon of gas
                    gstx, //Excise tax per gallon 39 cents
                    slstx, //8 percent sales tax
                    ctfee, //Cap and trade fee of 10 cents per gallon
                    fdrltx, //Federal tax of 18.4 cents per gallon
                    gsprc, //User input of gas price per gallon
                    prcPrf, // Percent of profit made
                    profit; //6.5 percent oil company profit per gallon
    
    //Initialize Variables
    gstx=.39;
    slstx=.08;
    ctfee=.1;
    fdrltx=.184;
    profit=.065;        

cout<<"The amount it cost you per gallon the last time you put gas in your car."<<endl;    
cin>>gsprc;
    //Map inputs to outputs -> The Process
    csttx=(gsprc*slstx)+(fdrltx)+(gstx)+(ctfee);
    prcntGt=(csttx/gsprc);
    ttlprft=(gsprc*profit);
    prcPrf=(ttlprft/gsprc);
    
    //Display Results
cout<<"Percentage of Gas Tax on Gallon      = "<<prcntGt*100<<"%"<<endl;
cout<<"Profit Made from Gallon of Gas       = $"<<ttlprft<<endl;   
cout<<"Percent Made from Tax per Gallon     = "<<prcntGt*100<<"%"<<endl;
cout<<"Compared to Percent of Profit        = "<<prcPrf*100<<"%"<<endl;
cout<<"Dollars Made from Gas Tax per Gallon = $"<<csttx<<endl;
cout<<"Dollars Made from Profit per Gallon  = $"<<ttlprft<<endl;
    //Exit Stage Right
    return 0;
}
