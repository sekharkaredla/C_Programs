#include<iostream>
using namespace std;
int factr(int a)
{
	if(a==0)
	return 1;
	else
	return a*factr(a-1);
}
int main()
{
	int factr(int);
	cout<<"\nenter n : ";
	int n;
	cin>>n;
	int f=factr(n);
	cout<<"\nfactorial is : "<<f;
}
