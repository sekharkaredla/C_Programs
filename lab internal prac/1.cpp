#include<iostream>
#include<cmath>
using namespace std;
float fact(int n)
{
	float f=1;
	int i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
return f;
}

int main()
{
	cout<<"\nenter the value of x in degrees : ";
	float x,t;
	cin>>x;
	x=x*(3.14/180);
	int i,j;float s=0;
	for(i=1;i<=100;i++)
	{
		s=0;t=x;
		for(j=1;j<=i;j=j+2)
		{
			s=s+t*(1.0/fact(j));
			t=-1*x*x;
		}
		cout<<s<<endl;
		if(((s-sin(x))>-0.001)&&((s-sin(x))<0.001))
		{
			cout<<"\nobtained value of sinx is : "<<s;
			cout<<"\noriginal value of sinx is : "<<sin(x);
			cout<<"\nvalue of n required is : "<<i;
			break;
		}
	}
	return 1;
}
