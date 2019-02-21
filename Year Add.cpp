#include <iostream>
using namespace std;
int main()
{
    int thou,hun,ten,one,user,total;
    string trya;
    a:
    cout<<"Please enter a No. from 1 to 9999: ";
    cin>>user;
    if(user <= 0 || user > 9999)
    {
            system("cls");
            cout<<"Please enter 1 to 9999 Only"<<endl;
            goto a;
            }
    thou = user / 1000;
    hun = user % 1000 / 100;
    ten = user % 1000 % 100 / 10;
    one = user % 1000 % 100 % 10;
    
    total = thou + hun + ten + one;
    
    cout<<"Total : "<<total<<endl<<endl;
    b:
    cout<<"Try Again? [Y/N] : "<<endl;cin>>trya;
    if(trya == "Y" || trya == "y" )
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
        goto b;
        }
    
    
    
    
    
    
    
    
    system("PAUSE");
    return 0;
}
