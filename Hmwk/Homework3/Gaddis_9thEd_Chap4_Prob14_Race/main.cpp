/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 12, 2022, 10:30 AM
 * Purpose: C++ - Template to be used in all future Assignments
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
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
    string          name1,
                    name2,
                    name3;
    float           tms1,
                    tms2, 
                    tms3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1;"\t";cin>>tms1;
    cin>>name2;"\t";cin>>tms2;
    cin>>name3;"\t";cin>>tms3;
    //Map inputs -> outputs
    if(tms1<tms2 && tms2<tms3)
    {
        cout<<name1<<"\t"<<tms1<<endl;cout<<name2<<"\t"<<tms2<<endl;cout<<name3<<"\t"<<tms3;
    
    }
        else if(tms1<tms3 && tms3<tms2)
        {
            cout<<name1<<"\t"<<setw(3)<<tms1<<endl;cout<<name3<<"\t"<<setw(3)<<tms3<<endl;cout<<name2<<"\t"<<setw(3)<<tms2;
    }
            else if(tms2<tms1 && tms1<tms3)
            {
                cout<<name2<<"\t"<<setw(3)<<tms2<<endl;cout<<name1<<"\t"<<setw(3)<<tms1<<endl;cout<<name3<<"\t"<<setw(3)<<tms3;
    }
                else if(tms2<tms3 && tms3<tms1)
                {
                    cout<<name2<<"\t"<<setw(3)<<tms2<<endl;cout<<name3<<"\t"<<setw(3)<<tms3<<endl;cout<<name1<<"\t"<<setw(3)<<tms1;
    }
                    else if(tms3<tms1 && tms1<tms2)
                    {
                      cout<<name3<<"\t"<<setw(3)<<tms3<<endl;cout<<name1<<"\t"<<setw(3)<<tms1<<endl;cout<<name2<<"\t"<<setw(3)<<tms2;
    }                        else if(tms3<tms2 && tms2<tms1)
                        {
                          cout<<name3<<"\t"<<setw(3)<<tms3<<endl;cout<<name2<<"\t"<<setw(3)<<tms2<<endl;cout<<name1<<"\t"<<setw(3)<<tms1;
    }

    //Display the outputs

    //Exit stage right or left!
    return 0;
}