#include<iostream>
#include<string.h>
using namespace std;
void sort1(char a[100][100],int n)
{
	int i,j;char temp[100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
}
int main()
{
	char a[100][100];int n,i;
	cout<<"enter the number of words : ";
	cin>>n;
	if(n>100)
	{
		cout<<"too many words ...";
		return -1;
	}
	cout<<endl<<"enter "<<n<<" words : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort1(a,n);
	cout<<"\nwords in sorted order are : \n";
	for(i=0;i<n;i++)
	cout<<endl<<a[i];
	return 1;
}
