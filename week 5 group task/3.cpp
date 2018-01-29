#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class bank
{
	long int ac;
	float bal;
	char t,name[100],pass[100];
	public:
	void withdraw(float);
	void deposite(float);
	void display();
	void create();	
	friend void assign(bank []);
	friend int check(bank [],char [],long int);
};
void bank::display()
{
	cout<<"\n\n\nName : "<<name;
	cout<<"\nAccount no : "<<ac;
	cout<<"\nAvailable Balance : "<<bal;
	cout<<"\nAccount Type : "<<t;
}
void bank::create()
{
	cout<<"\nenter you name : ";
	cin>>name;
	cout<<"\nenter your account number : ";
	cin>>ac;
	cout<<"\nenter the balance : ";
	cin>>bal;
	cout<<"\ncreate a new password : ";
	cin>>pass;
	while(bal<1000)
	{
		cout<<"\nminimum amount should be 1000 , please re- enter amount ...";
		cin>>bal;
	}
	cout<<"\nenter the type of account : ";
	cin>>t;
}
void bank::withdraw(float w)
{
	if(w>bal)
	{
		cout<<"\nnot enough balance...";
		exit(-1);
	}
	cout<<"\npresent balance is : "<<bal;
	cout<<"\nwithdrawal amount : "<<w;
	cout<<"\nnew balance is : "<<bal-w;
	bal=bal-w;
}
void bank::deposite(float w)
{
	cout<<"\npresent balance : "<<bal;
	cout<<"\ndeposite amount : "<<w;
	cout<<"\nnew amount : "<<bal+w;
	bal=bal+w;
}
void assign(bank b[])
{
	strcpy(b[0].name,"sekhar");
	b[0].ac=23095;
	b[0].bal=9023099.4326;
	b[0].t='s';
	strcpy(b[0].pass,"karedla1");
	strcpy(b[1].name,"ram");
	b[1].ac=23021;
	b[1].bal=90099.4326;
	b[1].t='s';
	strcpy(b[1].pass,"shayam2");
	strcpy(b[2].name,"shyam");
	b[2].ac=23675;
	b[2].bal=10299.426;
	b[2].t='c';
	strcpy(b[2].pass,"ram3");		
}
int check(bank b[],char p[],long int z)
{
	int i;
	for(i=0;i<3;i++)
	{
		if(strcmp(b[i].pass,p)==0&&(b[i].ac==z))
		return i;
	}
	return -1;
}
int main()
{
	bank b[3];
	assign(b);
	int ch;
	cout<<"\nenter 1 to create an account\nenter 2 to deposite amount\nenter 3 to withdraw amount : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				bank s;
				s.create();
			}break;
		case 2:
			{
				char p[100];int k;long int z;
				cout<<"\nenter your account number : ";
				cin>>z;
				cout<<"\nenter your pass-word : ";
				cin>>p;
				k=check(b,p,z);
				if(k>=0)
				{
					b[k].display();
				}
				else 
				{
				cout<<"no matching profile ...";
				exit(-1);
				}
				cout<<"\nenter the amount to be deposited : ";
				float w;
				cin>>w;
				b[k].deposite(w);
			}break;
		case 3:
			{
				char p[100];int k;long int z;
				cout<<"\nenter your account number : ";
				cin>>z;
				cout<<"\nenter your pass-word : ";
				cin>>p;
				k=check(b,p,z);
				if(k>=0)
				{
					b[k].display();
				}
				else 
				{
				cout<<"no matching profile ...";
				exit(-1);
				}
				cout<<"\nenter the amount to be withdrawn : ";
				float w;
				cin>>w;
				b[k].withdraw(w);
			}break;
		default : cout<<"wrong option entry ....";
	}
return 1;
}
