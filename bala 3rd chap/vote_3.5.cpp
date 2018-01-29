#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the no of ballots : ";
	static int n,i,r[6];
	cin>>n;
	int *p=new int[n];
	cout<<"enter the results of ballot : \n";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
		if(p[i]>0&&p[i]<6)
		{
			r[p[i]-1]++;
		}
		else
		r[5]++;
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n the no of votes for "<<i+1<<" party is "<<r[i];
	}
		cout<<"\n the spoiled ballots are "<<r[5];
return 1;
}
