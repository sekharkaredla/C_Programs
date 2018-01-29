#include<iostream>
using namespace std;
void trans()
{
	cout<<"enter the username : ";
	char u[80],u1[80],p[80],p1[80];FILE *fp,*pp;long int ac,ac1,ac2,l,d;float f;char t,name[80];
	cin>>u;
	cout<<"enter your password : ";
	cin>>p;
	cout<<"enter your account number : ";
	cin>>ac;
	fp=fopen("user.txt","r");
	pp=fopen("info.txt","r");
	int i=0;
		do
		{
		fscanf(fp,"\n%s %s",&u1,&p1);	 
		fscanf(pp,"%ld %s %ld %ld %f %c\n",&ac1,&name,&l,&d,&f,&t);
				if((ac1==ac)&&(strcmp(p1,p)==0))
				{
					cout<<"your balance is : "<<f;
					cout<<"\npress 1 for withdrawl , press 2 for deposite : ";
					int op;float a;
					cin>>op;
					cout<<"enter the amount : ";
					cin>>a;
					if(op==1)
						{f=f-a;
						cout<<"remaining balance is "<<f;
						}
					else
						{
						f=f+a;
						cout<<"balance is : "<<f;
						}
						i=1;
				}
		}while(i==0);
}

	

