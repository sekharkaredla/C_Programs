#include<iostream>
using namespace std;
int main()
{
	try
	{
		int a;char ch;float f;
		cout<<"enter a no : ";
		cin>>a;
		if(a==0)        //all the types of exceptions are being thrown 
		throw a;		//integer ,character ,floating 
		else if(a==1)
		throw ch;
		else
		throw f;
	}
	catch(...) //three dots in the paranthesis
	{
		cout<<"\nexception caught ...";
	}
	return 1;
}
