#include<iostream>
using namespace std;
int main()
{
	int m,i;
	cout<<"enter the size of vector : ";
	cin>>m;
	int *p=new int[m];
	cout<<"the garbage values are : \n";
	for(i=0;i<m;i++)
	{
		cout<<p[i]<<"\n";
	}
	return 1;
}
