#include <iostream>
using namespace std;
int main()
{
    a:
    int num1 = 0,user,trya = 0,num2;
    string tryu,user2;
    
    cout<<"Welcome to 52 weeks challenge calculator"<<endl;
    cout<<"Total Savings = [T]"<<endl;
    cout<<"Denomination = [D]"<<endl;
    cout<<"Exit = [E]"<<endl;
    cin>>user2;
    
    if(user2 == "T" || user2 == "t")
    {
             system("cls");
    while(trya == 0)
    {
               c:
               cout<<"Please enter a number :";
               cin>>user;
               num1 = user;
            if(user >= 1)
            {
                    for(int a = 0; a <= 52; a++)
                    {
                            num1 = num1 + (user * a);
                            }
                            num1 = num1 - user;
                    cout<<"Total savings for a year :"<<num1<<endl;
            }
            
            else
            {
            goto a;
            }
            
            cout<<"Input again? [Y]/[N] :";
            cin>>tryu;
            
            if(tryu == "Y" || tryu == "y")
            {
                    num1 = 0;
                    user = 0;
                    system("cls");
                    goto c;                    
                    }
                    
            else
            {
                 system("cls");
                 goto a;
                 }
    }
    }
    else if(user2 == "D" || user2 == "d")
    {
         system("cls");
         b:
         cout<<"Please enter a digit to denominate :";
         cin>>user;
         if(user >= 1)
         {
                 for(int a = 0; a <= 52; a++)
                 {
                         num1 = user * a;
                         cout<<a<<","<<num1<<endl;
                 }
         }
         
         else
         {
             return 0;
             }
             
         cout<<"Denominate again? [Y]/[N] :";
         cin>>tryu;
         
         if(tryu == "Y" || tryu == "y")
         {
                 user = 0;
                 num1 = 0;
                 system("cls");
                 goto b;
                 }
                 
         else
         {
             system("cls");
             goto a;
             }
    }
    
    else if(user2 == "E" || user2 == "e")
    {
         return 0;
    }
    
    else
    {
        system("cls");
        goto a;
    }
    
    
    
    
    
    system("PAUSE");
    return 0;
}
