#include<iostream>
using namespace std;
void create()
{
	FILE *fp,*pp;
	fp=fopen("user.txt","a");
	pp=fopen("info.txt","a");
	char name[100];long int d,l,ac;float bal;char t;
	cout<<"enter the account number : ";
	cin>>ac;
	cout<<"Enter your name  : ";
	cin>>name;
	cout<<"enter the date : ";
	cin>>d;
	l=d;
	cout<<"enter the balance : ";
	cin>>bal;
	cout<<"enter the type of account : ";
	cin>>t;
	fseek(pp,0,2);
	fprintf(pp,"%ld %s %ld %ld %f %c\n",ac,name,d,l,bal,t);
	char u[80],p[80];
	cout<<"enter the username : ";
	cin>>u;
	cout<<"password : ";
	cin>>p;
	fseek(fp,0,2);
	fprintf(fp,"%s %s\n",u,p,ac);
}
	

