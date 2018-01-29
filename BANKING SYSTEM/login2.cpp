#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void login()
{
	FILE *fp,*pp;
	fp=fopen("user.txt","r");
	pp=fopen("info.txt","r");
	char u[80],u1[80],p1[80],p[80],name[80];long int l,d,ac,ac1;float f;char t,ch;
	cout<<"enter username : ";
	cin>>u;
	cout<<"enter password : ";
	cin>>p;
	cout<<"enter a/c number : ";
	cin>>ac;
	int i=1,r=0,k=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		r++;
	}
	fseek(fp,0,0);
	do
	{
		fscanf(fp,"\n%s %s",&u1,&p1);	 
		fscanf(pp,"%ld %s %ld %ld %f %c\n",&ac1,&name,&l,&d,&f,&t);
				if((ac1==ac)&&(strcmp(p1,p)==0))
				{
					cout<<"\n account number : "<<ac1;
					cout<<"\n name of the candidate : "<<name;
					cout<<"\n date of accout creation : "<<l;
					cout<<"\n last login on "<<d;
					cout<<"\n acount type : "<<t;k=1;break;
				}
				i++;
	}while(i<r);
	if(k==0)
	{
	cout<<"wrong combination of username , password , account number";
	exit(-1);
	}
	cout<<"\n\npress 1 for a transaction , 2 so as logout : ";
	int op1,op2;
	cin>>op1;
	if(op1==1)
	{
					cout<<"your balance is : "<<(int)f;
					cout<<"\npress 1 for withdrawl , press 2 for deposite : ";
					int op;float a;
					cin>>op;
					cout<<"enter the amount : ";
					cin>>a;
					if(op==1)
						{f=f-a;
						cout<<"remaining balance is "<<(int)f;
						}
					else
						{
						f=f+a;
						cout<<"balance is : "<<(int)f;
						}
						i=1;
		 
	}
	else
	return;
}

