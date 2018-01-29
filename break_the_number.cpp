#include<iostream>
using namespace std;
int main()
{
	int nd,sum;sum=0;
	cin>>nd;
	int *a=new int[nd];
	int n,r,re;re=0;
	cin>>n;
	int temp=n;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+r;
		a[re++]=r;
		temp=temp/10;
	}
	int k=(nd/2)+1;int rsum,lsum;
	while(1)
	{
		rsum=lsum=0;
		for(int p=0;p<k;p++)
		rsum+=a[p];
		lsum=sum-rsum;
		if(lsum>rsum)
		break;
		else
		k--;
	}
	cout<<nd-(k+1);
	
}
