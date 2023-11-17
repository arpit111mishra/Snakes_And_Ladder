#include<iostream>
#include<ctime>
using namespace std;
int roll_dice()
{
   return (rand()%6 + 1);
}
void play_game()
     
{      int count=0;
       int dice_value,player_position = 1;
       string name;
       cout<<"HEY PLAYER : ENTER YOUR NAME : ";
       getline(cin,name);
       cout<<name<<" WELCOME TO THE GAME : ALL THE BEST"<<endl<<endl;
       cout<<name<<" YOUR ARE AT 1 CURRENTLY . "<<endl<<endl;
       while(player_position<100)
       {
        count++;
        l1:
        cout<<name<<" PRESS ENTER TO ROLL THE DICE "<<endl<<endl;
        cin.get();
         dice_value=roll_dice();
        cout<<"YOU ROLLED : "<<dice_value <<endl;
        player_position += dice_value;
        cout<<name<<" YOUR CURRENT POSITION IS :"<<player_position<<endl;
        switch(player_position)
        {
            case 17 :
            {   cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 13 "<<endl;
                player_position=13;
                break;
            }
            case 32 :
            { 
                cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 6 "<<endl;
                player_position=6;
                break;
            }
            case 52:
            {
                cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 27 "<<endl;
            player_position=27;
            break;
            }
            case 57 :  
            {
                cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 10 "<<endl;
            player_position=10;
            break;

            }
            case 62:
            {
                cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 22 "<<endl;
                  player_position=22;
                  break;
            }
            case 88:
            {
                cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 18 "<<endl;
             player_position=18;
             break;
            }
            case 95 :
            {
                cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 70 "<<endl;
       player_position=70;
       break;
            }
            case 97:
            {
                cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 67 "<<endl;
              player_position=67;
              break;
            }
            case 99:
            {
                cout<<name<<" OOPS!! YOU LANDED ON A SNAKE .MOVE BACK TO POSITION 2 "<<endl;
                player_position=2;
                break;
            }
            case 3:
            {
              cout<<"GREAT ! YOU CLIMBED A LADDER .MOVE TO POSITION: 21"<<endl;
               player_position=21;
                break;     
            }
            case 8:
            {
cout<<"GREAT ! YOU CLIMBED A LADDER .MOVE TO POSITION: 30"<<endl;
             player_position=30;
                break;
            }
            case 58:
            {
cout<<"GREAT ! YOU CLIMBED A LADDER .MOVE TO POSITION: 77"<<endl;
             player_position=77;
                break;
            }
            case 75:
            {
cout<<"GREAT ! YOU CLIMBED A LADDER .MOVE TO POSITION: 86"<<endl;
             player_position=86;
                break;
            }
            case 80:
            {
cout<<"GREAT ! YOU CLIMBED A LADDER .MOVE TO POSITION: 100"<<endl;
             player_position=100;
                break;
            }
            }
            }
            if(player_position>100)
            { cout<<"OOPS EXCEEDS 100 :"<<endl<<"ROLL AGAIN : "<<endl;
                player_position-=dice_value;
                cout<<name<<" YOUR CURRENT POSITION IS :"<<player_position<<endl;
                goto l1;
            }
            else if(player_position==100)
            {
                cout<<"CONGRATULATIONS "<<name<<" YOU WON "<<"THIS TIME YOU TOOK "<<count<<" CHANCES TO WIN THE GAME"<<endl;
                cout<<"THANK YOU "<<endl;
            }
} 
void rule()
{   cout<<endl<<"                     INSTRUCTION              "<<endl<<endl<<endl;
    cout<<"YOU WILL FIND LADDERS AT POSITION -   3 , 8 , 58 , 75 , 80 , 90 "<<endl; 
    cout<<"SNAKES WILL BYTE AT POSITIONS -  17 , 32 , 52 , 57 , 62 , 88 , 95 , 97 , 99 "<<endl<<endl<<endl;
}
int main()
{                    
       srand(time(0));
       rule();
       play_game();
       return 0;
}