/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 12, 2022, 7:30 PM
 * Purpose: C++ - Template to be used in all future Assignments
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string      inp1,
                inp2,
                type1,
                type2;
               
                
            
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>inp1;
    cin>>inp2;
    
    if (inp1 == "Aries" || inp1 == "Leo" || inp1 == "Saggittarius")
    {
        type1="FIRE";
    }
    if (inp1 == "Taurus" || inp1 == "Virgo" || inp1 == "Capricorn")
    {
        
        type1="EARTH";
    }
    if (inp1 == "Gemini" || inp1 == "Libra" || inp1 == "Aquarius")
    {
        type1="AIR";
    }
    if (inp1 == "Cancer" || inp1 == "Scorpio" || inp1 == "Pisces")
    {
        type1="WATER";
    }
    if (inp2 == "Aries" || inp1 == "Leo" || inp1 == "Saggittarius")
    {
        type2="FIRE";
    }
    if (inp2 == "Taurus" || inp2 == "Virgo" || inp2 == "Capricorn")
    {
        type2="EARTH";
    }
    if (inp2 == "Gemini" || inp2 == "Libra" || inp2 == "Aquarius")
    {
        type2="AIR";
    }
    if (inp2 == "Cancer" || inp2 == "Scorpio" || inp2 == "Pisces")
    {
        type2="WATER";
    }
    if (type1 == "FIRE" && type2 == "FIRE")
        {
            cout<<inp1<<" and "<<inp2<<"are compatible Fire signs.";
        }
        else if (type1 == "FIRE" && type2 == "EARTH")
           { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
           else if (type1 == "FIRE" && type2 == "AIR")
           { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                else if (type1 == "FIRE" && type2 == "WATER")
                { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                    else if (type1 == "EARTH" && type2 == "EARTH")
                    { cout<<inp1<<" and "<<inp2<<" are compatible Earth signs.";}
                        else if (type1 == "EARTH" && type2 == "FIRE")
                       { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                            else if (type1 == "EARTH" && type2 == "AIR")
                           { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                                else if (type1 == "EARTH" && type2 == "WATER")
                               { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                                    else if (type1 == "AIR" && type2 == "AIR")
                                    { cout<<inp1<<" and "<<inp2<<" are compatible AIR signs.";}
                                         else if (type1 == "AIR" && type2 == "FIRE")
                                         { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                                                else if (type1 == "AIR" && type2 == "EARTH")
                                                        { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                                                          else if (type1 == "AIR" && type2 == "WATER")
                                                          { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                                                              else if (type1 == "WATER" && type2 == "WATER")
                                                             { cout<<inp1<<" and "<<inp2<<" are compatible Water signs.";}
                                                                 else if (type1 == "WATER" && type2 == "FIRE")
                                                                 { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                                                                    else if (type1 == "WATER" && type2 == "EARTH")
                                                                 { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                                                                        else if (type1 == "WATER" && type2 == "AIR")
                                                                 { cout<<inp1<<" and "<<inp2<<" are not compatible signs.";}
                                                             
                               
    //Display the outputs

    //Exit stage right or left!
    return 0;
}