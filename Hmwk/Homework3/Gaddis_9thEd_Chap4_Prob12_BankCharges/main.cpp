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
    int         chck;      
                
    float       ls20chk=.10,
                ls39chk=.08,
                ls59chk=.06,
                mr60chk=.04,
                mnthfe=10,
                ls400fe=15,
                chkfe,
                nwblnc,
                blnc;
                
                
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>blnc;
    cin>>chck;
    //Map inputs -> outputs
    while (blnc < 0 )
    {
        cout<<"Balance is Overdrawn";
        cin>>blnc;
    }
    
    cout<<"Balance"<<"     $"<<setw(9)<<setprecision(2)<<fixed<<blnc<<endl;
    
    while (chck < 0)
    {
        cout<<"Negative value invalid, please try again.";
        cin>>chck;
    }
    if (chck < 20)
    {
        chkfe=(chck*ls20chk);
    }
        else if (chck >=20 && chck <= 39)
        {
        chkfe=(chck*ls39chk);
        }
            else if (chck >=40 && chck <=59)
            {
        chkfe=(chck*ls59chk);
            }
                else if (chck >=60)
                {
        chkfe=(chck*mr60chk);
                }
    cout<<"Check Fee   $"<<setw(9)<<setprecision(2)<<fixed<<chkfe<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<setprecision(2)<<fixed<<mnthfe<<endl;
    
    if (blnc < 400)
    {
        blnc=blnc-ls400fe;
        cout<<"Low Balance $"<<setw(9)<<setprecision(2)<<fixed<<ls400fe<<endl;
    }
    nwblnc=blnc-chkfe;
    if (blnc < 0 || nwblnc < 0)
    cout<<"Balance is Overdrawn"<<endl;
    nwblnc=nwblnc-mnthfe;
    //Display the outputs
    cout<<"New Balance $"<<setw(9)<<setprecision(2)<<fixed<<nwblnc;
 
    
    //Exit stage right or left!
    return 0;
}