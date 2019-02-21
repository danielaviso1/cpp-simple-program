#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int ai,user,aisc = 0,ussc = 0;
    string trya;
    
    srand(time(NULL));

    
    a:
    while(aisc < 5 && ussc < 5)             
    {
               ai=rand()%3+1;
    cout<<"J A C K EN P O Y "<<endl;
    cout<<"[1] - Rock "<<endl;
    cout<<"[2] - Paper "<<endl;
    cout<<"[3] - Scissor "<<endl;
    cout<<"You : "<<ussc<<" "<<"Computer : "<<aisc<<endl;
    cout<<"J A C K EN P O Y "<<endl;
    cout<<"Command : ";
    cin>>user;
    
    if(user >= 1 && user <= 3)
    {      
    if(user == ai)
    {
            cout<<"Computer Chose : "<<ai<<endl;
            cout<<"Round Draw "<<endl;
            }

            
    else if(user == 1 && ai == 2)
    {
         cout<<"Computer Chose : "<<ai<<endl;
         cout<<"Computer Win"<<endl;
         aisc++;
         }
         
    else if(user == 2 && ai == 1)
    {
         cout<<"Computer Chose : "<<ai<<endl;
         cout<<"You Win"<<endl;
         ussc++;
         }
         
    else if(user == 1 && ai == 3)
    {
         cout<<"Computer Chose : "<<ai<<endl;
         cout<<"You Win"<<endl;
         ussc++;
         }
         
    else if(user == 3 && ai == 1)
    {
         cout<<"Computer Chose : "<<ai<<endl;
         cout<<"Computer Win"<<endl;
         aisc++;
         }
         
    else if(user == 2 && ai == 3)
    {
         cout<<"Computer Chose : "<<ai<<endl;
         cout<<"Computer Win"<<endl;
         aisc++;
         }
         
    else if(user == 3 && ai == 2)
    {
         cout<<"Computer Chose : "<<ai<<endl;
         cout<<"You Win"<<endl;
         ussc++;
         }
    system("PAUSE");
    system("cls");
    
    }
    
    else
    {
        cout<<"Choose between 1 - 3 Only"<<endl;
        system("PAUSE");
        system("cls");
        goto a;
        }
}
    
    
    if(ussc == 5 || aisc == 5)
    {
            if(ussc == 5)
            {
                    cout<<"=============="<<endl;
                    cout<<"== YOU WIN  =="<<endl;
                    cout<<"=============="<<endl;
                    }
                    
            else if(aisc == 5)
            {
                    cout<<"==============="<<endl;
                    cout<<"== YOU LOSE  =="<<endl;
                    cout<<"==============="<<endl;
                 }
    ussc = 0;
    aisc = 0;
    }
    
    
    b:
    cout<<"Play again? [Y]/[N]"<<endl;
    cin>>trya;
    
    if(trya == "Y" || trya == "y")
    {
            system("cls");
            goto a;
            }
    else if(trya == "N" || trya == "n")
    {
            return 0;
            }
            
    else
    {
        system("cls");
        goto b;
    }
         
    
         
    
    
    system("PAUSE");
    return 0;
}
