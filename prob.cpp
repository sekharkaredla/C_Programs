//program developed by Sekhar Karedla Cse-02 BE(2/4)
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int r[3],c[3],v[3],p[3][3];int i;
	for(i=0;i<3;i++)
	{
		cout<<"\nenter the sum of row "<<i+1<<endl;
		cin>>r[i];
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nenter the sum of coloum "<<i+1<<endl;
		cin>>c[i];
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nenter the value "<<i+1<<endl;
		cin>>v[i];
	}
	p[0][2]=v[0];
	p[1][1]=v[1];
	p[1][2]=v[2];
	p[1][0]=r[1]-v[1]-v[2];
	p[2][2]=c[2]-v[0]-v[2];
//	cout<<p[1][0]<<' '<<p[2][2];
	int a,b,c1,d;
	for(d=0;d<r[2];d++)
	{
		for(c1=0;c1<r[2];c1++)
		{
			for(b=0;b<c[1];b++)
			{
				for(a=0;a<c[1];a++)
				{
					if((a+b+v[0])==r[0])
					{
						if((a+p[1][0]+c1)==c[0])
						{
							if((b+d+v[1])==c[1])
							{
								if(((c1+p[2][2]+d)==r[2]))
								{
									p[0][0]=a;
									p[0][1]=b;
									p[2][0]=c1;
									p[2][1]=d;
									break;
								}
							}
						}
					}
					
				}
			}
		}
	}
int j;
cout<<"\nthe complete matrix is : \n\n";
for(i=0;i<3;i++)
{
	cout<<endl;
	for(j=0;j<3;j++)
	{
		cout<<" "<<setw(2)<<std::right<<p[i][j];
	}
	cout<<"  "<<setw(2)<<std::right<<r[i];
}
cout<<"\n\ncoloums summation is : ";
cout<<endl<<" "<<c[0]<<" "<<c[1]<<" "<<c[2];
return 1;
}
