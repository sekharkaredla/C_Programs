#include<iostream>
using namespace std;
class matrix
{
	int p[10][10];int r,c;
	public:
		void display();
		matrix(){}
		matrix(int m,int n)
		{
			r=m;c=n;
			int i,j;
			cout<<"\nenter the data : \n";
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cin>>p[i][j];
				}
			}
		}
		matrix operator+(matrix);
};
matrix matrix::operator+(matrix a)
{
	matrix temp;
	temp.r=a.r;
	temp.c=a.c;
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			temp.p[i][j]=this->p[i][j]+a.p[i][j];
		}
	}
	return temp;
}
void matrix::display()
{
	int i,j;
	for(i=0;i<r;i++)
	{
		cout<<endl;
		for(j=0;j<c;j++)
		cout<<" "<<p[i][j];
	}
}
int main()
{
	cout<<"\nenter the order of matrices : ";
	int m,n;
	cin>>m>>n;
	matrix a,b;
	a=matrix(m,n);
	b=matrix(m,n);
	matrix c;
	c=a+b;
	c.display();
}
