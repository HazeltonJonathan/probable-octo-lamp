/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 12, 2022, 11:50 AM
 * Purpose: C++ - Template to be used in all future Assignments
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char        p1,
                p2;
    int         p1s,
                rock,
                paper,
                scissor,
                p2s;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>p1;
    cin>>p2;
    
    if (p1 == 'r' || p1 == 'R')
    {
			p1s = rock;
			}
		
		else if (p1 == 'p' || p1 == 'P'){
			p1s = paper; 
			}
			
		else if (p1 == 's' || p1 == 'S'){
			p1s = scissor;
			}

		else {
			cout<<"Invalid Selection. Please choose from 'r' 'p' or 's' "<< endl;
			
			cin>>p1;
			}
    if (p2 == 'r' || p2 == 'R')
    {
			p2s = rock;
			}
		
		else if (p2 == 'p' || p2 == 'P'){
			p2s = paper; 
			}
			
		else if (p2 == 's' || p2 == 'S'){
			p2s = scissor;
			}
		
		else {
			cout<<"Invalid Selection. Please choose from 'r' 'p' or 's' "<< endl;
			
			cin>>p2;
			}


    if (p1s == rock && p2s == scissor)
    {
    cout<<"Rock breaks scissors.";
    }
        else if (p1s == paper && p2s == scissor)
        {
        cout<<"Scissors cuts paper.";    
        }
            else if (p1s == scissor && p2s ==scissor)
            {
                cout<<"Tie";
            }
                else if (p1s == rock && p2s == rock)
                {
                    cout<<"Tie";
                }
                    else if (p1s == rock && p2s == scissor)
                    {
                        cout<<"Rock breaks scissors.";    
                    }
                        else if (p1s == rock && p2s == paper)
                        {
                            cout<<"Paper covers rock.";
                        }
                            else if (p1s == paper && p2s == rock)
                            {
                                cout<<"Paper covers rock.";
                            }
                                else if (p1s == paper && p2s == paper)
                                {
                                    cout<<"Tie";
                                }
                                    else if (p1s == scissor && p2s == paper)
                                    {
                                        cout<<"Scissors cuts paper.";
                                    }
                                        else if (p1s == scissor && p2s == rock)
                                        {
                                            cout<<"Rock breaks scissors.";
                                        }
    

    //Display the outputs

    //Exit stage right or left!
    return 0;
}