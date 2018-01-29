#include<iostream>
using namespace std;
class k
{
	static int count;
	public:
		k(void)
     	{
	    	(count)++;
    	}
		void showcount()
		{
			cout<<"\ncount is : "<<count;
		}
};
int k::count;
int main()
{
	int n,i;
	cout<<"\nenter the number of objects : ";
	cin>>n;
	k *p=new k[n];
	for(i=0;i<n;i++)
	{
		p[i].showcount();
	}	
	return 1;
}
