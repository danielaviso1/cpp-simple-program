#include <iostream>
using namespace std;

int main()
{
    int user;
    cout<<"Please enter a digit for an increasing number"<<endl;
    cin>>user;
    
    for(int a = 0; a <= user; a++)
    {
            for(int b = 0; b < a; b++)
            {
                    cout<<"*";
                    }
                    cout<<endl;
    }
    
    for(int c = user-1; c > 0; c--)
    {
            for(int d = c; d > 0; d--)
            {
                    cout<<"*";
                    }
                    cout<<endl;
                    }
      
    
    system("PAUSE");
    return 0;
}
