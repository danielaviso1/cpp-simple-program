#include <iostream>
using namespace std;

int main()
{
	int money = 0,z = 0,pin = 0,choice,count = 0,a,pincheck = 0,pinpin,withdraw = 0,monay = 0;
	while(z == 0)
	{
		cout<<"[1] - PIN"<<endl;
		cout<<"[2] - Deposit"<<endl;
		cout<<"[3] - Withdraw"<<endl;
		cout<<"[4] - Check Balance"<<endl;
		cout<<"[5] - Exit"<<endl;
		cin>>choice;
		if(choice == 1)
		{
			a:
			cout<<"* 4 DIGITS ONLY *"<<endl;
			cout<<"Please enter your desired PIN : ";
			cin>>pin;
			pinpin = pin;
			while(pinpin > 0)
			{
				a = pinpin / 10;
				pinpin = a;
				count++;
			}
			
			if(count == 4)
			{
				system("cls");
				cout<<"PIN Registered"<<endl;
				count = 0;
			}
			
			else
			{
				system("cls");
				count = 0;
				cout<<"Invalid PIN"<<endl;
				goto a;
			}
		}
		
		else if(choice == 2)
		{
			b:
			cout<<"PLease enter your PIN : ";
			cin>>pincheck;
			if(pincheck == pin)
			{
				cout<<"Please enter the amount to Deposit : ";
				cin>>money;
				system("cls");
				cout<<"Cash has been Deposit"<<endl;
			}
			
			else
			{
				system("cls");
				cout<<"Invalid PIN"<<endl;
				goto b;
			}
		}
		
		else if(choice == 3)
		{
			c:
			cout<<"Please enter PIN : ";
			cin>>pincheck;
			if(pincheck == pin)
			{
				cout<<"Balance : "<<"P"<<money<<endl;
				cout<<"Please enter amount to Withdraw :";
				cin>>withdraw;
				if(withdraw > money)
				{
					cout<<"Balance is not enough"<<endl;
					goto c;
				}
				
				else if(withdraw <= money)
				{
					system("cls");
					monay = money;
					money = monay - withdraw;
					cout<<"Cash Transferred"<<endl;
				}
				
				else
				{
					cout<<"Invalid Input"<<endl;
					goto c;
				}
			}
		}
		
		else if(choice == 4)
		{
			system("cls");
			cout<<"Your Balance is : "<<"P"<<money<<endl;
		}
		
		else if(choice == 5)
		{
			return 0;
		}
		
		else
		{
			system("cls");
			cout<<"Invalid Input"<<endl;
		}
	}
	
	
	
	
	
	
}
