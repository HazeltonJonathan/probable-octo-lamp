/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 12, 2022, 7:30 PM
 * Purpose: C++ - Template to be used in all future Assignments
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int             year;
    string          rmn;
    char            n1000s,
                    n100s,
                    n10s,
                    n1s;
    
    //Initialize variables here
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>year;
    
   
    if   (year<1000 || year>3000){
        cout<<year<<" is Out of Range!";
        exit(0);
    }
    
    n1000s=year/1000;   
    n100s=year%1000/100; 
    n10s=year%100/10;    
    n1s=year%10;         
    
    switch(n1000s){
        case 3:rmn+="M";
        case 2:rmn+="M";
        case 1:rmn+="M";
    }
    
    rmn+=n100s==9?"CM":
           n100s==8?"DCCC":
           n100s==7?"DCC":
           n100s==6?"DC":
           n100s==5?"D":
           n100s==4?"CD":
           n100s==3?"CCC":
           n100s==2?"CC":
           n100s==1?"C":"";
    
    if(n10s==9)rmn+="XC";
    else if(n10s==8)rmn+="LXXX";
    else if(n10s==7)rmn+="LXX";
    else if(n10s==6)rmn+="LX";
    else if(n10s==5)rmn+="L";
    else if(n10s==4)rmn+="XL";
    else if(n10s==3)rmn+="XXX";
    else if(n10s==2)rmn+="XX";
    else if(n10s==1)rmn+="X";
              

    if(n1s==9)rmn+="IX";
    if(n1s==8)rmn+="VIII";
    if(n1s==7)rmn+="VII";
    if(n1s==6)rmn+="VI";
    if(n1s==5)rmn+="V";
    if(n1s==4)rmn+="IV";
    if(n1s==3)rmn+="III";
    if(n1s==2)rmn+="II";
    if(n1s==1)rmn+="I";
    
    //Display the results
    cout<<year<<" is equal to "<<rmn;

    return 0;
}