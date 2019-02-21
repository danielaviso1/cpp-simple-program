#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	string usern,passw;
	string arRay[10][10];
	int idNum = 0;
	cout<<"==========================="<<endl;
	cout<<"== Welcome to my Program =="<<endl;
	cout<<"==========================="<<endl<<endl;
	cout<<"Please enter Username : ";
	cin>>usern;
	cout<<"Please enter Password : ";
	cin>>passw;
	
	if(usern == "admin" && passw == "admin")
	{
		system("cls");
		int choice;
		
		while(choice != 5)
		{
			system("cls");
			int data = 0;
			string fName, lName, loc, gender, age;
			cout<<"==================="<<endl;
			cout<<"======= MENU ======"<<endl;
			cout<<"==================="<<endl<<endl;
			
			cout<<"============================="<<endl;
			cout<<"== [1] - Add Student       =="<<endl;
			cout<<"== [2] - View Student      =="<<endl;
			cout<<"== [3] - View All Student  =="<<endl;
			cout<<"== [4] - Update Student    =="<<endl;
			cout<<"== [5] - Log Out           =="<<endl;
			cout<<"============================="<<endl;
			cout<<"Choice : ";
			cin>>choice;
			
			if(choice == 1)
			{
				system("cls");
				string blabla;
				cout<<"=========================="<<endl;
				cout<<"======= ADD STUDENT ======"<<endl;
				cout<<"=========================="<<endl<<endl;
				
				cout<<"Please enter First Name : ";
				cin>>arRay[idNum][0];
				
				cout<<"Please enter Last Name : ";
				cin>>arRay[idNum][1];
				
				cout<<"Please enter Age : ";
				cin>>arRay[idNum][2];
				
				cout<<"Please enter Location : ";
				cin>>arRay[idNum][3];
				
				cout<<"Please enter Gender : ";
				cin>>arRay[idNum][4];
				idNum++;
			}
			
			else if(choice == 2)
			{
				system("cls");
				int num = 0;
				cout<<"=============================="<<endl;
				cout<<"======== VIEW STUDENT ========"<<endl;
				cout<<"=============================="<<endl<<endl;
				cout<<"Please enter Student Number : ";
				cin>>num;
				cout<<"First Name "<<" "<<"Last Name  "<<" "<<"Age        "<<" "<<"Location   "<<" "<<"Gender     "<<endl;
				cout<<arRay[num][0]<<"      "<<arRay[num][1]<<"       "<<arRay[num][2]<<"          "<<arRay[num][3]<<"      "<<arRay[num][4]<<endl;
				system("PAUSE");
			}
			
			else if(choice == 3)
			{
				system("cls");
				cout<<"=================================="<<endl;
				cout<<"======== VIEW ALL STUDENT ========"<<endl;
				cout<<"=================================="<<endl<<endl;
				
				cout<<"First Name "<<" "<<"Last Name  "<<" "<<"Age        "<<" "<<"Location   "<<" "<<"Gender     "<<endl;
				
				for(int i = 0; i <= idNum; i++)
				{
					cout<<arRay[i][0]<<"      "<<arRay[i][1]<<"       "<<arRay[i][2]<<"          "<<arRay[i][3]<<"      "<<arRay[i][4]<<endl;
				}
				system("PAUSE");
			}
			
			else if(choice == 4)
			{
				int sNo;
				int dataNo;
				system("cls");
				cout<<"================================"<<endl;
				cout<<"======== UPDATE STUDENT ========"<<endl;
				cout<<"================================"<<endl<<endl;
				
				cout<<"Please enter Student Number : ";
				cin>>sNo;
				
				cout<<"First Name "<<" "<<"Last Name  "<<" "<<"Age        "<<" "<<"Location   "<<" "<<"Gender     "<<endl;
				cout<<arRay[sNo][0]<<"      "<<arRay[sNo][1]<<"       "<<arRay[sNo][2]<<"          "<<arRay[sNo][3]<<"      "<<arRay[sNo][4]<<endl;
				
				cout<<"======================"<<endl;
				cout<<"== [1] - First Name =="<<endl;
				cout<<"== [2] - Last Name  =="<<endl;
				cout<<"== [3] - Age        =="<<endl;
				cout<<"== [4] - Location   =="<<endl;
				cout<<"== [5] - Gender     =="<<endl;
				cout<<"======================"<<endl<<endl;
				
				cout<<"Choose to Edit : ";
				cin>>dataNo;
				
				if(dataNo >= 1 && dataNo <= 5)
				{
					cout<<"Enter New Data : ";
					cin>>arRay[sNo][dataNo - 1];
				}
				
				else
				{
					cout<<"Wrong choice of Number"<<endl;
					system("PAUSE");
				}
			}
			
			else if(choice == 5)
			{
				cout<<"Thank you for using My Program"<<endl;
			}
			
			else
			{
				system("cls");
				cout<<"You can only enter Number 1 or 2 or 3"<<endl;
				system("PAUSE");
			}
		}
	}
	
	else
	{
		cout<<"Wrong Username or Password"<<endl;
	}
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
