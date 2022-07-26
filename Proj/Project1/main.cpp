/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 25, 2022, 11:45 AM
 * Purpose: C++ - Template to be used in all future Assignments
 */

//System Libraries Here
#include <iostream>
#include <ctime>     //Random number function
#include <cstdlib>   //Random number function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void card (int rank, int suit);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int     rank1,
            rank2,
            rank3,
            rank4,
            dlr,
            dlr2,
            dlr3,
            suit,
            plyr,
            jack=10,
            queen=10,
            king=10,
            ace=11;
    char    hit;
            
    srand   (time(0));        

    
    //Input or initialize values Here
    rank1=(rand()%14)+1; //First Card Dealt
    rank2=(rand()%14)+1; //Second Card Dealt
    rank3=(rand()%14)+1; //Third Card Dealt
    dlr=(rand()%14)+1;   //First Dealer Card
    dlr2=(rand()%14)+1;  //Second Dealer Card
    dlr3=(rand()%14)+1;  //Third Dealer Card    
    //Map the inputs -> outputs
    if      (rank1 <= 10)    //Random generator to get value of first card
             rank1 = rank1;
    else if (rank1==11)
        rank1==jack;
    else if (rank1==12)
        rank1==queen;
    else if (rank1==13)
        rank1==king;
    else if (rank1==14)
        rank1==ace;
   
    if      (rank2 <= 10)  //Random generator to get value of second card
             rank2 = rank2;
    else if (rank2==11)
        rank2==jack;
    else if (rank2==12)
        rank2==queen;
    else if (rank2==13)
        rank2==king;
    else if (rank2==14)
        rank2==ace;
    
    plyr=rank1+rank2; //Total of first 2 cards
    if (plyr<=21){
        cout<<"Player 1 Total = "<<plyr<<endl;
        cout<<"Would you like to hit?";
        cin>>hit;
        if (hit=='y'||hit=='Y'){
            plyr=plyr+rank3; //Total of 3 cards if player hits
        }
        else{                //Anything other than 'y' or 'Y' won't hit 
            plyr=plyr;}
    }
    if (plyr>21){
        cout<<"You're a loser!"<<endl; //You have a gambling problem :D
    }
    cout<<"Player total = "<<plyr<<endl;
    //Exit
    return 0;
}
