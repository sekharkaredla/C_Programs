#include<iostream>
#include "create.cpp"
#include "login2.cpp"
#include "delete.cpp"
#include "trans.cpp"
using namespace std;
int main()
{
	cout<<"********************************************************************************\n________________________________________________________________________________\n\t\t\t ****SSK BANK****"<<endl;
	cout<<"________________________________________________________________________________\n********************************************************************************"<<endl<<"welcome to ssk bank ind pvt.ltd";
	cout<<"\n the best banking service";
	cout<<"\n\n\n\n\t ########__________________########\n\t\t services provided:"<<"\n\t ########__________________########";
	cout<<"\n\t| 1)create a new account \n_______________________________________\n\t| 2)customer login \n_______________________________________\n\t| 3)delete an account\n_______________________________________\n\t|";
	int ch,f=1;
	cout<<"\n enter your choice : ";
	cin>>ch;
	while(f==1)
	{
	switch(ch)
	{
		case 1: 
		{
			create();
			f=0;
		}break;
		case 2:
		{
			login();
			f=0;
		}break;
		case 3:
		{
			deletE();
			f=0;
		}break;
		default:cout<<"\nplease enter a correct choice again : ";
	}
	return 0;
}
}
	

