#include<iostream>
using namespace std;
void func1(int i) throw(int,double) 
{			//a function being restricted to throw integer and double data only
	int m;double d;char ch;
	if(i==0)
	throw m;
	else if(i==1)
	throw d;
	else
	throw ch;
}
int main()
{
	try
	{
		int a;
		cout<<"\nenter a number : ";
		cin>>a;
		func1(a);
	}
	catch(...)
	{
		cout<<"\nINSIDE CATCH ...";
	}
return 1;
}
