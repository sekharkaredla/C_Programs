#include<iostream>
using namespace std;
template<class T>
class matrix1
{
	T **p;
	int m,n;
	public:
		matrix1()
		{}
		matrix1(int l,int k)
		{
			int i;
			m=l;n=k;
			p=new T*[m];
			for(i=0;i<m;i++)
			p[i]=new T[n];
		}
		void getdata()
		{
			int i,j;
			cout<<"\nenter the data : ";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cin>>p[i][j];
				}
			}
		}
		void display()
		{
			cout<<"\nthe matrix is : \n";
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
		void search(T &k)
		{
			int i,j,flag;flag=0;
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					if(p[i][j]==k)
					{
						cout<<"\nsearch element found at "<<i<<" "<<j<<" position...";
						flag=1;
					}
				}
			}
			if(flag==0)
			cout<<"\nsearch element not found ....";
		}
		friend matrix1 add(matrix1 r,matrix1 s)
		{
			matrix1 temp(r.m,r.n);
			temp.m=r.m;
			temp.n=r.n;
			int i,j;
			for(i=0;i<(temp.m);i++)
			{
				for(j=0;j<(temp.n);j++)
				{
					temp.p[i][j]=r.p[i][j]+s.p[i][j];
				}
			}
			return temp;
		}		
};
int main()
{
	int ch;
	cout<<"\npress 1 for integer and press 2 for float : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int x;int m,n;
				cout<<"\nenter the order of matrix :  ";
				cin>>m>>n;
				matrix1 <int>a(m,n);
				matrix1 <int>b(m,n);
				matrix1 <int>c(m,n);
				cout<<"\nfirst matrix";
				a.getdata();
				cout<<"\nsecond matrix";
				b.getdata();
				c=add(a,b);
				cout<<"\nthe summation is : ";
				c.display();
				cout<<"\nenter the search element : ";
				cin>>x;
				c.search(x);
			}break;
		case 2:
			{
				float x;int m,n;
				cout<<"\nenter the order of matrix :  ";
				cin>>m>>n;
				matrix1 <float>a(m,n);
				matrix1 <float>b(m,n);
				matrix1 <float>c(m,n);
				cout<<"\nfirst matrix";
				a.getdata();
				cout<<"\nsecond matrix";
				b.getdata();
				c=add(a,b);
				cout<<"\nthe summation is : ";
				c.display();
				cout<<"\nenter the search element : ";
				cin>>x;
				c.search(x);
			}break;
		default:cout<<"\ninvalid choice .....";
	}
	return 1;
}
