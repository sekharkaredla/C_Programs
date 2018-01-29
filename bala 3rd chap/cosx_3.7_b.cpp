#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x,t,s,i,j;
	cout<<"enter x in degrees : ";
	cin>>x;
	x=x*(3.141/180);
	for(j=0;j<1000;j++)
	{
	s=1;t=-(x*x)/2;
	for(i=0;i<=j;i=i+2)
	{
		s=s+t;
		t=t*-1*x*x/((i+3)*(i+4));
	}
	if(((s-cos(x))>-0.000001)&&((s-cos(x)<0.000001)))
	{
		cout.precision(10);
		cout<<"\n the original value : "<<cos(x);
		cout<<"\n the obtained value : "<<s;
		cout<<"\n order : "<<j;
		break;
	}
	}
 return 1;
}
