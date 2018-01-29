#include<iostream>
using namespace std;
void div(int x,int y)
{
	try
	{
	if(y==0)
	throw y;
	else
	cout<<"\nresult is : "<<((1.0*x)/(y));
	}
	catch(int)
	{
		cout<<"\ndivision by zero ....";
		throw;
	}
}
int main()
{
	try
	{
		div(200,10);
		div(20,0);
	}
	catch(int)
	{
		cout<<"\nrethrown.....";	
	}
return 1;
}
