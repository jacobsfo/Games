// Example program
#include <iostream>
#include <string>
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
#include <cstdlib>
#include <cctype>
//array of cards rand, spacebar slap struct
/*

 */

using namespace std;
char a;
char b;
char c;
char q;
int p1card,p2card;

int main()
{

     while(true)
    {
                    cout<<"P1: Enter o to pick a card" <<endl;

        // Set terminal to raw mode 
        system("stty raw"); 

        // Wait for single character 
        a = getchar(); 

        // Echo input:
        cout << "--" << a << ":";

        // Reset terminal to normal "cooked" mode 
        system("stty cooked"); 

                if(a=='o')
                // cin.ignore(1);
                {p1card = rand()%12;}
                cout << p1card << endl;
               
                if( (p1card == 11 ) )  // if it = J 
                    {
                        
                        //cin.ignore();
                        cout << endl;
                        //cin >> c;
                        system("stty raw"); 
                    
        // Wait for single character 
        c = getchar(); 

        // Echo input:
        cout << "--" << c << "--";

        // Reset terminal to normal "cooked" mode 
        system("stty cooked"); 

                    while(c!= 'g')
                { continue;}
                cout << "you are the winner" << endl;
cout << "Thanks for playing... Press q to quit or c to continue" << endl;
        
                system("stty raw"); 
                    
        // Wait for single character 
        c = getchar(); 

        // Echo input:
       // cout << "--" << c << "--";

        // Reset terminal to normal "cooked" mode 
        system("stty cooked"); 
        if(c=='q')
        {break;}       
        else{continue;}            
        
                    
                    }
                    
                cout << "P2:Enter w to pick a card"<< endl;
                
                system("stty raw"); 

        // Wait for single character 
        b = getchar(); 

        // Echo input:
        cout << "--" << b << ":";

        // Reset terminal to normal "cooked" mode 
        system("stty cooked"); 
                if(b=='w')
                {p2card = rand()%12;}
                    cout << p2card << endl;
                    //cout << endl;
                
                    if( (p1card == 11 ) || (p2card == 11) )  // if it = J 
                    {
                        
                        //cin.ignore();
                        cout << endl;
                        //cin >> c;
        //str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
        system("stty raw"); 

        // Wait for single character 
        c = getchar(); 

        // Echo input:
        cout << "--" << c << "--";

        // Reset terminal to normal "cooked" mode 
        system("stty cooked"); 
                    while(c!= 'g')
                { continue;}
                cout << "you are the winner" << endl;
                    
                    }
                   
                    
                    
    }
            //whoever presses spacebar first wins 
        

                


        }
