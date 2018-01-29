#include<iostream>
using namespace std;
class matrix
{
	int **m;int d1,d2;
	public:
		matrix(){}
		matrix(int,int);
		matrix(int);
		void display();
		void add(matrix &,matrix &);
};
matrix::matrix(int k,int n)
{
	d1=k;d2=n;
	m=new int *[d1];//m=new int*[d1];
	for(int i=0;i<d1;i++)//for(i=0;i<n;i++)
	m[i]=new int[d2];//m[i]=new int[d2];
	cout<<"\n enter the elements: ";
	int i,j;
	for(i=0;i<d1;i++)
	for(j=0;j<d2;j++)
	cin>>m[i][j];
}
matrix::matrix(int n)
{
	d1=d2=n;
	m=new int*[d1];
	for(int i=0;i<d1;i++)
	m[i]=new int[d2];
}
void matrix::display()
{
	int i,j;
	for(i=0;i<d1;i++)
	{
		cout<<endl;
		for(j=0;j<d2;j++)
		cout<<" "<<m[i][j];
	}
}
void matrix::add(matrix &a,matrix &b)
{
	int i,j;
	d1=a.d1;d2=a.d2;
	m=new int*[d1];
	for(i=0;i<d1;i++)
	m[i]=new int[d2];
	for(i=0;i<d1;i++)
	{
		for(j=0;j<d2;j++)
		this->m[i][j]=a.m[i][j]+b.m[i][j];
	}
}
int main()
{
	cout<<"\nenter the order of matrix : ";
	int m,n;
	cin>>m>>n;
	matrix a,b(m,n);
	a=matrix(m,n);
	matrix c;
	c.add(a,b);
	c.display();
	
}

