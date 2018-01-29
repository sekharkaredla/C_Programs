#include<iostream>
#include<fstream>
using namespace std;
class bank
{
	char name[80];
	float bal;
	char t;
	public:
		int ac;
		void getdata()
		{
			cout<<"\nenter name : ";
			cin>>name;
			cout<<"\nenter balance : ";
			cin>>bal;
			cout<<"\nacount number : ";
			cin>>ac;
			cout<<"\naccount type : ";
			cin>>t;
		}
		void detail()
		{
			cout<<"\nname : "<<name;
			cout<<"\nbalance : "<<bal;
			cout<<"\naccount number : "<<ac;
			cout<<"\naccount : "<<t;
		}
		friend void deposite(bank s)
		{
			cout<<"\enter the amount to be deposited : ";
			float a;
			cin>>a;
			s.bal=s.bal+a;
			cout<<"\nnew balance is : "<<s.bal;
		}
		friend void balance(bank s)
		{
			cout<<"\nbalance is : "<<s.bal;
		}
};
int main()
{
	fstream file;
	file.open("bank_data.dat",ios::app|ios::in);
	int n,i;
	cout<<"\nenter the number of customers : ";
	cin>>n;
	bank *p;
	p=new bank[n];
	for(i=0;i<n;i++)
	{
		cout<<"\nenter the details of "<<i+1<<" customer : ";
		p[i].getdata();
	}
	file.write((char *)&p,sizeof(p));
	int k;
	cout<<"\nenter the account whose details you want : ";
	cin>>k;
	file.read((char *)&p,sizeof(p));
	for(i=0;i<n;i++)
	{
		if(p[i].ac==k)
		{
		p[i].detail();
		break;
		}
	}
	return 1;
}
