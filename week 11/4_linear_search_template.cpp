#include<iostream>
using namespace std;
template<class T>
void lsearch(T *p,T x,int n)
{
	int i,flag;flag=0;
	for(i=0;i<n;i++)
	{
		if(p[i]==x)
		{
			cout<<"\nsearch element found at "<<i+1<<" position....";
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"\nsearch element not found ....";
	}
}
int main()
{
	int a[10]={11,22,33,44,55,66,77,88,99,0};
	char b[10]="aqwrtypol";
	int a1;char b1;
	cout<<"\nenter the search element in integer : ";
	cin>>a1;
	cout<<"\nenter the search element in character : ";
	cin>>b1;
	lsearch(a,a1,10);
	lsearch(b,b1,10);
	return 1;
}
