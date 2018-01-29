#include<iostream>
using namespace std;
int main()
{
	float y,x,t,s,i,j,k;
	for(x=0;x<10;x++)
	{cout<<"\n";
		for(j=x;j<x+1;j=j+0.1)
		{s=0;t=1;
			for(k=1;k<100;k++)
			{
				s=s+t;
				t=t*j/k;
			}
			s=1/s;
			cout<<" "<<s;
		}
	}
return 1;
}
