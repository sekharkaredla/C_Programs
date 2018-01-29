#include<iostream>
#include<fstream>
using namespace std;
class bank
{
	char name[80];float bal;
	public:
		int acc;
		void get()
		{
			cout<<"\nenter name : ";
			cin>>name;
			cout<<"\nenter acc no : ";
			cin>>acc;
			cout<<"\nenter balance : ";
			cin>>bal;
		}
		void deposite(float m)
		{
			bal=bal+m;
		}
		void balance()
		{
			cout<<"\nthe balance is : "<<bal;
		}
		void detail()
		{
			cout<<"\nNAME : "<<name;
			cout<<"\nACC No :"<<acc;
			cout<<"\nBALANCE : "<<bal;
		}
};
int main()
{
	int n;
	cout<<"\nenter the number of objects : ";
	cin>>n;
	bank *p=new bank[n];
	fstream file;
	file.open("bank_data.txt",ios::app|ios::in);
	for(int i=0;i<n;i++)
	{
		p[i].get();
	}
	file.write((char *)&p,sizeof(p));
	cout<<"\nenter the search account number : ";
	int x;
	cin>>x;
	file.read((char *)&p,sizeof(p));
	for(int i=0;i<n;i++)
	{
		if(p[i].acc==x)
		p[i].detail();
	}
return 1;
	
}
