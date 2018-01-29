#include<iostream>
using namespace std;
class mat
{
	int **p;int m,n;
	public:
		mat()
		{}
		mat(int a,int b)
		{
			m=a;n=b;
			int i;
			p=new int*[a];
			for(i=0;i<a;i++)
			p[i]=new int[b];
		}
		void read()
		{
			cout<<"\nenter data of the matrix : ";
			int i,j;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cin>>p[i][j];
				}
			}
		}
		mat multiply(mat s)
		{
			if(n!=s.m)
			{
				cout<<"\ninvalid order of matrices...";
				exit(-1);
			}
			int i,j,k;
			mat temp(m,s.n);
			for(i=0;i<m;i++)
			{
				for(j=0;j<s.n;j++)
				{
					temp.p[i][j]=0;
					for(k=0;k<n;k++)
					{
						temp.p[i][j]+=p[i][j]*s.p[i][j];
					}
				}
			}
			return temp;
		}
		void display()
		{
			int i,j;
			for(i=0;i<m;i++)
			{
				cout<<endl;
				for(j=0;j<n;j++)
				{
					cout<<" "<<p[i][j];
				}
			}
		}
		};
int main()
{
	mat a,b,c;
	a=mat(3,3);b=mat(3,2);
	a.read();
	b.read();
	c=a.multiply(b);
	c.display();
return 1;
}
