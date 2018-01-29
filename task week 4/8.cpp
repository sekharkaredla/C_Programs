#include<iostream>
using namespace std;
int n;
template<class t>
void sort1(t *a)
{
	int i,j;t k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
}
int main()
{
	cout<<"enter the data type : 1 for float , 2 for char , 3 for int : ";
	int ch,i;
	cin>>ch;
	cout<<"enter the number of elements : ";
	cin>>n;
	switch(ch)
	{
		case 1:{
				float *p=new float[n];
				cout<<"enter the data : \n";
				for(i=0;i<n;i++)
				cin>>p[i];
				sort1(p);
				cout<<"sorted data is : \n";
				for(i=0;i<n;i++)
				{
					cout<<p[i]<<" ";	
				}
				}break;
		case 2:
			{
				char *p=new char[n];
				cout<<"enter the data : \n";
				for(i=0;i<n;i++)
				cin>>p[i];
				sort1(p);
				cout<<"sorted data is : \n";
				for(i=0;i<n;i++)
				{
					cout<<p[i]<<" ";	
				}
			}break;
		case 3:
			{
				int *p=new int[n];
				cout<<"enter the data : \n";
				for(i=0;i<n;i++)
				cin>>p[i];
				sort1(p);
				cout<<"sorted data is : \n";
				for(i=0;i<n;i++)
				{
					cout<<p[i]<<" ";	
				}
			}break;
		default : cout<<"wrong option ....";
	}

	return 1;
}
