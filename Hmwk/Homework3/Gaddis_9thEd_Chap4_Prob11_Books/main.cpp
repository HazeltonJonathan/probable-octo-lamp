/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 12, 2022, 10:30 AM
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
    int         bk0,
                bk1,
                bk2,
                bk3,
                bk4,
                bkprch;
    
    //Initialize or input i.e. set variable values
    bk0=0;
    bk1=5;
    bk2=15;
    bk3=30;
    bk4=60;
    //Map inputs -> outputs
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bkprch;
    cout<<"Books purchased =  "<<bkprch<<endl;
    
    if (bkprch == 0)
    {
        cout<<"Points earned   = "<<bk0;
    }
    else if (bkprch == 1)
    {
        cout<<"Points earned   = "<<bk1;
    }
   else if (bkprch == 2)
    {
        cout<<"Points earned   = "<<bk2;
    }
     else if (bkprch == 3)
    {
        cout<<"Points earned   = "<<bk3;
    }
     else if (bkprch >= 4)
    {
        cout<<"Points earned   = "<<bk4;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}