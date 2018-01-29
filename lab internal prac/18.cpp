#include<iostream>
using namespace std;
template<class T>
void bbsrt(T *p,int n)
{
	int i,j;T temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j+1];
				p[j+1]=p[j];
				p[j]=temp;
			}
		}
	}
}
int main()
{
	int a[]={8,6,13,1,14,35,235,2,214,124};
	bbsrt(a,10);
	int i;
	cout<<"\nafter sort : ";
	for(i=0;i<10;i++)
	cout<<a[i]<<" ";
	char n[7]="sekhar";
	bbsrt(n,7);
	cout<<"\nafter sort : ";
	for(i=0;i<10;i++)
	cout<<n[i]<<" ";	
return 1;
}
