/* 
 * File:   main.cpp
 * Author: Jonathan Hazelton
 * Created on July 25, 2022, 1:45 PM
 * Purpose: C++ - Template to be used in all future Assignments
 */

/*
 * Version 1.2
 * Added if the player or dealer wins by calculating who has the higher number.
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
    int     rank1,  //First Card
            rank2,  //Second Card
            rank3,  //Third Card
            rank4,  //Fourth Card
            dlr,    //Dealer First Card
            dlr2,   //Dealer Second Card
            dlr3,   //Dealer Third Card
            dlrttl, //Dealer Total
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
    if (rank1==11){
        rank1=jack;
    }
    else if (rank1==12){    
        rank1=queen;
}
    else if (rank1==13){
        rank1=king;
    }
    else if (rank1==14){
        rank1=ace;
    }
    else{
        //Random generator to get value of second card
         rank1 = rank1;
    }
//    if      (rank2 <= 10)  //Random generator to get value of second card
//             rank2 = rank2;
    if (rank2==11){
        rank2=jack;
    }
    else if (rank2==12){    
        rank2=queen;
}
    else if (rank2==13){
        rank2=king;
    }
    else if (rank2==14){
        rank2=ace;
    }
    else{
        //Random generator to get value of second card
         rank2 = rank2;
    }
    if (rank3==11){
        rank3=jack;
    }
    else if (rank3==12){    
        rank3=queen;
}
    else if (rank3==13){
        rank3=king;
    }
    else if (rank3==14){
        rank3=ace;
    }
    else{
        //Random generator to get value of second card
         rank3 = rank3;
    }
    if (dlr==11){
        dlr=jack;
    }
    else if (dlr==12){    
        dlr=queen;
}
    else if (dlr==13){
        dlr=king;
    }
    else if (dlr==14){
        dlr=ace;
    }
    else{
        //Random generator to get value of second card
         dlr = dlr;
    }
    if (dlr2==11){
        dlr2=jack;
    }
    else if (dlr2==12){    
        dlr2=queen;
}
    else if (dlr2==13){
        dlr2=king;
    }
    else if (dlr2==14){
        dlr2=ace;
    }
    else{
        //Random generator to get value of second card
         dlr2 = dlr2;
    }
    if (dlr3==11){
        dlr3=jack;
    }
    else if (dlr3==12){    
        dlr3=queen;
}
    else if (dlr3==13){
        dlr3=king;
    }
    else if (dlr3==14){
        dlr3=ace;
    }
    else{
        //Random generator to get value of second card
         dlr3 = dlr3;
    }
    
    dlrttl=dlr+dlr2;
    
    if (dlrttl>21){
        cout<<"Dealer Busts, You win!"<<endl;
        cout<<"You're such a lucky winner."<<endl;}
    else if(dlr+dlr2<17){
        dlrttl=dlr+dlr2+dlr3;
    }  
   
       
    
    plyr=rank1+rank2; //Total of first 2 cards
    if (plyr<=21){
        cout<<"Player 1 Total = "<<plyr<<endl;
        cout<<"Would you like to hit?"<<endl;
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
    cout<<"Player Total = "<<plyr<<endl;
    cout<<"Dealer Total = "<<dlrttl<<endl;
    cout<<"Player First Card = "<<rank1<<endl<<"Second Card       = "<<rank2<<
            endl<<"Third Card        = "<<rank3<<endl;
    cout<<"Dealer First Card = "<<dlr<<endl<<"Second Card       = "<<
            dlr2<<endl<<"Third Card        = "<<dlr3<<endl;
    if (plyr>dlrttl){
        cout<<"You win...for now"<<endl;
    }
        else {
        cout<<"Thanks for losing!"<<endl;
    }
    //Exit
    return 0;
}
