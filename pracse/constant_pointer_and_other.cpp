#include<iostream>
using namespace std;
int main()
{
	int a=5,b=10,c=25;
	int *const p=&a;
	int const*q=&b;
	cout<<*p<<" "<<*q<<endl;
/*	p=&c;
	*q=c;*///illegal statements
	*p=c;
	q=&c;
	cout<<*p<<" "<<*q;
	return 1;
}
