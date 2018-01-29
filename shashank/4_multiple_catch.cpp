#include<iostream>
using namespace std;
int main()
{
	try
	{
		int a;char ch;double d;float f;
		cout<<"\nenter a number : ";
		cin>>a;		//all types of exceptions are being thrown
		if(a==1)
		throw ch;
		else if(a==2)
		throw d;
		else if(a==3)
		throw f;
		else
		throw a;
	}
	catch(int i)   //the catch statements can be used as switch statements
	{
		cout<<"interger "<<i;
	}
	catch(char c)
	{
		cout<<"character "<<c;
	}
	catch(float a)
	{
		cout<<"floating "<<a;
	}
	catch(double d)
	{
		cout<<"double "<<d;
	}
	return 1;
}
