#include<iostream>
using namespace std;
int main()
{
	int a,b;                          
	cout<<"\nenter two numbers : ";//accepting two numbers from users
	cin>>a>>b;
	try
	{
		if(b!=0)
		cout<<"\na/b = "<<a/b;	
		else
		throw b;	//throwing an exception if b is zero
	}
	catch(int i)
	{
		cout<<"\nthe divisor is "<<i;	//receiving of the thrown exception
	}
	cout<<endl<<"END";
return 1;
}
