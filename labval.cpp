#include<iostream>
using namespace std;
int main()
{
	float v[14]={13.77,15.48,15.98,16.23,16.40,16.47,16.61,16.62,16.67,16.70,16.92,17.06,17.12,17.14};
	float res[14];
	for(int i=0;i<14;i++)
	{
		res[i]=((17.50-v[i])/v[i])*100;
	}
	for(int i=0;i<14;i++)
	cout<<"\n"<<res[i];
}
