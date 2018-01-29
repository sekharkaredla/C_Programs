#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double s,t,x,i,j;
	cout<<"enter the value of x in degress : ";
	cin>>x;
	x=x*(3.14/180);
	for(i=3;i<100;i++)
	{s=0;t=x;
		for(j=2;j<i;j++)
		{
			s=s+t;
			t=t*-1*x*x/(2*(j-1)*(2*j-1));
		}
		
		if((sin(x)-s)/sin(x)<0.000001)
		{
			cout<<"the original value of sinx is "<<sin(x);
			cout<<"\nthe obtained value is sinx is "<<s;
			cout<<"\nthe order is "<<i; 
			break;
		}
	}
	return 1;
}
