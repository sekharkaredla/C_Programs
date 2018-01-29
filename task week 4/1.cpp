#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the order of matrices : ";
	int m,n,i,j;
	cin>>m>>n;
	int p[10][10],q[10][10],r[10][10];
	if(m>10||n>10)
	{
		cout<<"size overload...";
		return -1;
	}
	cout<<"\nenter the elements of the first matrix : ";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>p[i][j];
	cout<<"\nenter the elements of the second matrix : ";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>q[i][j];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	r[i][j]=p[i][j]+q[i][j];
	cout<<"\nthe addition matrix is : ";
	for(i=0;i<m;i++)
	{
	cout<<endl;
	for(j=0;j<n;j++)
	cout<<r[i][j]<<" ";
	}
	return 1;
}
