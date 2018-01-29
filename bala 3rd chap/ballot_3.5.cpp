#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int r[5],n;int i,m,k,j;
	cout<<"enter the no of ballots : ";
	cin>>n;
	int *p=new int[n];
	for(i=0;i<n;i++)
	{
		p[i]=rand()%5+1;
	}
	r[2]=0;
	for(i=0;i<n;i++)
	{
		r[p[i]-1]++;
	}
	for(i=0;i<5;i++)
	{
		cout<<"\nthe "<<i+1<<" party"<<" got "<<r[i]<<" votes";
	}
}
