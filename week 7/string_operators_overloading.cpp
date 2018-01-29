#include<iostream>
#include<cstring>
using namespace std;
class str
{
	char *s;
	int l;
	public:
		str()
		{
			l=0;
			s=new char[l+1];
		}
		str(char *p)
		{
			l=strlen(p);
			s=new char[l+1];
			strcpy(s,p);
		}
		str(int k)
		{
			l=k;
			s=new char[l+1];
		}
		str operator +(str);
		int operator <(str);
		int operator >(str);
		void operator =(str);
		int operator !=(str);
		void display()
		{
		//	cout<<this->l;
			cout<<"\n"<<this->s;
		}
};
str str::operator +(str a)
{
	str t;
	t=str(strlen(this->s)+strlen(a.s));
	strcpy(t.s,this->s);
	strcat(t.s,a.s);
	return t;
}
int str::operator >(str a)
{
	if(strcmp(this->s,a.s)>0)
	return 1;
	else 
	return 0;
		
}
int str::operator <(str a)
{
	if(strcmp(this->s,a.s)<0)
	return 1;
	else 
	return 0;
}
void str::operator =(str a)
{
	strcpy(this->s,a.s);
}
int str::operator !=(str a)
{
	if(strcmp(this->s,a.s)!=0)
	return 1;
	else 
	return 0;
}
int main()
{
	str x,y;
	char temp[100];
	cout<<"\nenter the first word : ";
	cin>>temp;
	x=str(temp);
	cout<<"\nenter the second word : ";
	cin>>temp;
	y=str(temp);
	str xy;
	xy=x+y;
	cout<<"\nthe joint of the words is : ";
	xy.display();
	cout<<"\nhere x is the first word and y is the second word .";
	cout<<"\nthe result of x>y is : "<<(x>y);
	cout<<"\nthe result of x<y is : "<<(x<y);
	cout<<"\nthe result of x!=y is : "<<(x!=y);
	return 1;
}
