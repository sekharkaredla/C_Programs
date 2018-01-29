#include<iostream>
#include<cmath>
using namespace std;
float area(float r)
{
	return ((3.141592)*r*r);
}
int area(int s)
{
	return s*s;
}
int area(int a,int b)
{
	return a*b;
}
float area(float a,float b,float c)
{
	float s,ar;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}
int main()
{
	int a,b,ar;float r,a1,b1,c1,ar1;
	cout<<"enter the sides of rectangle : ";
	cin>>a>>b;
	ar=area(a,b);
	cout<<"\nthe area of rectangle is : "<<ar<<endl;
	cout<<"enter the sides of the triangle : ";
	cin>>a1>>b1>>c1;
	ar1=area(a1,b1,c1);
	cout<<"\nthe area of rectangle is : "<<ar1<<endl;
	cout<<"enter the radius of the circle : ";
	cin>>r;
	ar1=area(r);
	cout<<"the area of the circle is : "<<ar1<<endl;
	cout<<"enter the side of the square : ";
	cin>>a;
	ar=area(a);
	cout<<"\nthe area of the square is "<<ar;
	return 1;
}
