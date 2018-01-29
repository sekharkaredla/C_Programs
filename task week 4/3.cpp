#include<iostream>
using namespace std;
void call_by_value(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;	
}
void call_by_address(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void call_by_reference(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
int &return_by_reference(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	cout<<"enter two numbers : ";
	int a,b,c;
	cin>>a>>b;
	cout<<"swap by call by value : \n";
	call_by_value(a,b);
	cout<<a<<" "<<b<<endl;
	cout<<"swap by call by address : \n";
	call_by_address(&a,&b);
	cout<<a<<" "<<b<<endl;
	cout<<"swap by call by refernce : \n";
	call_by_reference(a,b);
	cout<<a<<" "<<b<<endl;
	return_by_reference(a,b)=-4;
	if(a==-4)
	cout<<"first number is larger ..";
	else
	cout<<"second number is larger ..";
	return 1;
}
