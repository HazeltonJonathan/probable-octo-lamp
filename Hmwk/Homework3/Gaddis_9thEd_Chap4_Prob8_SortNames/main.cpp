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
    int         mnthfe=10,
                chck,
                ls400fe=15;
    float       ls20chk=.10,
                ls39chk=.08,
                ls59chk=.06,
                mr60chk=.04,
                nwblnc,
                blnc;
                
                
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>blnc;
    cin>>chck;
    //Map inputs -> outputs
    while (blnc <= 0)
    cout<<"Balance is Overdrawn";
    
    if (chck < 20)
    {
        nwblnc=(chck*ls20chk)-blnc;
    }
    else if (chck <=40 && >=19)
    {
        nwblnc=(chck*ls39chk)-blnc;
    }
    else if (chck <=60 && >=40)
    {
        nwblnc=(chck*ls59chk)-blnc;
    }
     else if (chck ==60 || >=60)
    {
        nwblnc=(chck*ls60chk)-blnc;
    }
    
    if (nwblnc <= 400)
    {
        nwblnc=nwblnc-ls400fe;
    }
    //Display the outputs
    cout<<nwblnc;
    //Exit stage right or left!
    return 0;
}