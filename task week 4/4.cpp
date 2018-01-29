#include<iostream>
using namespace std;
int main()
{
	void area(float r,float pi=3.141592);
	float a,pi;
	cout<<"enter the radius of the circle : ";
	cin>>a;
	cout<<"area by taking default value of pi : ";
	area(a);
	cout<<"\nenter the value of pi : ";
	cin>>pi;
	cout<<"area by taking your value of pi : ";
	area(a,pi);
	return 1;
}
void area(float r,float pi)
{
	cout<<(pi*r*r);
}
