#include<iostream>
using namespace std;
void deletE()
{
	long int ac,ac1,l,d;FILE *fp,*cp,*pp,*mp;char ch;int r=0;
	fp=fopen("info.txt","r");float bal;
	cp=fopen("info_new.txt","w");
	pp=fopen("user.txt","r");
	mp=fopen("user_new.txt","w");
	char p[80],p1[80],u1[80],name[80],t;
	int i;
	cout<<"\nYou have chosen to delete option \n please enter the account details:\n";
	cout<<" Account number::\n";
	cin>>ac;
	cout<<" password::\n";
	cin>>p;
	cout<<"are you sure,do you want to continue?\n\n 1-yes\t 0-no\n\n please enter your choise:";
	cin>>i;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		r++;
	}
	fseek(fp,0,0);
	if(i==1)
	{	 
	int k=0;	
	do
	{
		
		fscanf(pp,"\n%s %s",&u1,&p1);
		fscanf(fp,"%ld %s %ld %ld %f %c\n",&ac1,&name,&l,&d,&bal,&t);
		if((ac1==ac)&&(strcmp(p1,p)==0))
		continue;
		fprintf(cp,"%ld %s %ld %ld %f %c\n",ac1,name,l,d,bal,t);
		fprintf(mp,"%s %s\n",u1,p1);k++;
	}
	while(k<r);
}
}	 	 	 

