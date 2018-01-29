#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float i,j,x,s,t;
	cout<<"enter x (degrees): ";
	cin>>x;
	x=x*(3.141/180);
	for(i=3;i<10000;i++)
	{
		s=1;t=-(x*x)/2;
		for(j=0;j<i;j=j+2)
		{
			s=s+t;
			t=t*-1*x*x/((j+3)*(j+4));
		}
		if((s-cos(x))<0.000001)
		{
			cout<<s<<" "<<cos(x)<<" "<<i;
			break;
		}
	}
return 1;
}
