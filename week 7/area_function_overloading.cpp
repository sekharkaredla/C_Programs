#include<iostream>
using namespace std;
float area(float r)
{
	return (3.141)*r*r;
}
int area(int a,int b)
{
	return a*b;
}
int area(int s)
{
	return s*s;
}
int main()
{
	float r,ac;
	int a,b,s,ar,as;
	cout<<"\nenter the radius of circle : ";
	cin>>r;
	ac=area(r);
	cout<<"\nenter the length and breadth of rectangle : ";
	cin>>a>>b;
	ar=area(a,b);
	cout<<"\nenter the side of the square : ";
	cin>>s;
	as=area(s);
	cout<<"\narea of the circle is : "<<ac;
	cout<<"\narea of the rectangle is : "<<ar;
	cout<<"\narea of the sqaure is : "<<as;
return 0;
	
}
