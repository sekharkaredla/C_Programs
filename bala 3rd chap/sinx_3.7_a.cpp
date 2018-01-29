#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long double s,t,x,i,j,n;
	cout<<"enter x in degrees : ";
	cin>>x;
	x=x*(3.141/180);
	for(j=3;j<1000;j++)
	{s=0;t=x;
	for(i=2;i<=j;i++)
	{
		s=s+t;
		t=t*-1*x*x/(2*(i-1)*(2*i-1));
	}
	if(((s-sin(x))>-0.00000001)&&(s-sin(x))<0.00000001)
	{
		cout.precision(10);
		cout<<"\nthe original value of sinx is : "<<sin(x);
		cout<<"\nthe obtained value of sinx is : "<<s;
		cout<<"\nthe order is : "<<j;
		break;
	}
	}
return 1;
}
