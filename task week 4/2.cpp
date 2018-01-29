#include<iostream>
using namespace std;
void multi(int p[10][10],int q[10][10],int r[10][10],int m,int n,int q1)
{
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<q1;j++)
		{
			r[i][j]=0;
			for(k=0;k<n;k++)
			r[i][j]+=p[i][k]*q[k][j];
		}	
	}
}
int main()
{
	int p[10][10],q[10][10],r[10][10];int m,n,p1,q1,i,j;
	cout<<"enter the order of first and second matrix : ";
	cin>>m>>n>>p1>>q1;
	if(p1>10||q1>10||m>10||n>10)
	{
		cout<<"size exceeded ...";
		return -1;
	}
	if(n!=p1)
	{
		cout<<"wrong order input ...";
		return -1;
	}
	cout<<"enter the elements of first matrix : \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>p[i][j];
	}
	cout<<"enter the elements of the second matrix : \n";
	for(i=0;i<p1;i++)
	{
		for(j=0;j<q1;j++)
		cin>>q[i][j];
	}
	multi(p,q,r,m,n,q1);
	cout<<"the output matrix is : \n";
	for(i=0;i<m;i++)
	{
		cout<<endl;
		for(j=0;j<q1;j++)
		cout<<r[i][j]<<" ";
	}
	return 1;
}
