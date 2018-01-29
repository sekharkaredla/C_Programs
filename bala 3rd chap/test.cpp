#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float i,j;
	cout<<"The table of values of Y=exp[-X] is:"<<endl;
	cout<<"X";
	for(i=0.1;i<=1.0;i=i+0.1)
	{
		cout<<"\t"<<i;
		
	}
	cout<<endl;
	for(i=0.0;i<10.0;i=i+1)
	{
		cout<<i;
		for(j=0.1;j<=1.0;j=j+0.1)
		{
			cout.precision(5);

			cout<<"\t"<<exp((i+j));
		}
		cout<<endl;
	}
return 0;
}
