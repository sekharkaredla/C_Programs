#include<iostream>
using namespace std;
int main()
{
	float s,k,p,i,j,n,t;t=1;
	cout<<"enter N : ";
	cin>>n;p=1;
	for(i=1;i<=n;i++)
	{s=s+p;t=1;
		for(j=0;j<i;j++)
		{
			t=t*(1/(i+1));
		}
		p=t;
	}
	cout.precision(10);
	cout<<"the sum is : "<<s;
return 1;	
}
