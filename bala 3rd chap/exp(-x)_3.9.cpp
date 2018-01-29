#include<iostream>
#include<iomanip>
#include<iomanip>
using namespace std;
int main()
{
	float x,s,t,k;float r[100];
	int i,j;
	for(x=0;x<10;x=x+0.1)
	{
		s=0;t=1;
		for(k=1;k<=100;k++)
		{
			s=s+t;
			t=t*x/k;
		}
		s=1/s;
		r[(int)((x)*10)]=s;
	}
		for(i=0;i<10;i++)
		for(j=0;j<10;j++)
		{
			cout.precision(2);
			cout<<" \n "<<setw(3)<<setprecision(2)<<r[(i+j)*10];
		}
	
}
