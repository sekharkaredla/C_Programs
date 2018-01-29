#include<iostream>
using namespace std;
void divide(int a,int b)     //a function that divides two numbers
{
	cout<<endl<<"IN DIVIDE";
	if(b!=0)
	cout<<"\na/b is "<<a/b;
	else
	throw b;		//b is thrown since b is zero 
}
int main()
{
	try
	{
		cout<<"\nIN TRY";
		divide(2000,20);
		divide(100,0);		//calling the function with divisor zero
	}
	catch(int i)    		//the throw exception from the function is caught
	{
		cout<<"\nIN CATCH";
		cout<<"\ndivisor is "<<i;
	}
return 1;
}
