#include<iostream>
using namespace std;
template<class m>
void firsttwo(m *p,m &n)
{
	int i,m1=-1,m2=-1;
	for(i=0;i<n;i++)
	{
		if(m1<p[i])
		{
			m1=p[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(m2<p[i]&&p[i]!=m1)
		{
			m2=p[i];
		}
	}
	cout<<"\nlargest and second largest numbers are : "<<m1<<" "<<m2;
}
int main()
{
	int n,i;
	cout<<"enter the size of the array : ";
	cin>>n;
	int *p=new int[n];
	cout<<"enter the elements : \n";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	firsttwo(p,n);
	return 1;
}
