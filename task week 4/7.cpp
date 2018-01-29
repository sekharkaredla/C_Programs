#include<iostream>
using namespace std;
template<class K>
void lsearch(K *p,K &x,K n)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(p[i]==x)
		{
			cout<<"search found at "<<i+1<<" position.";
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"search not found ...";
}
int main()
{
	int i,x;
	cout<<"enter the search element : ";
	cin>>x;
	int p[]={1,2,33,44,55,66,77,88,99,110};
	lsearch(p,x,10);
	return 1;
}
