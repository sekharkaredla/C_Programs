#include<iostream>
using namespace std;
int main()
{
	int r[3],c[3],v[3],p[3][3];int i,j;
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
	int k,l;
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			if(((i+j+v[0])==r[0]))
			{
			for(k=0;;k++)
			{
				if(((k+v[1]+v[2])==r[1]))
				{
				for(l=0;;l++)
				{
					if(((i+k+l)==c[0]))
					{
						int m,n;
						for(m=0;;m++)
						{
						if(((j+v[1]+m)==c[1]))
						{
							for(n=0;;n++)
							{
								if((n+v[0]+v[2]==c[2]))
								{
									if((l+m+n==r[2]))
									{
									p[0][0]=i;
									p[0][1]=j;
									p[0][2]=v[0];
									p[1][0]=k;
									p[1][1]=v[1];
									p[1][2]=v[2];
									p[2][0]=l;
									p[2][1]=m;
									p[2][2]=n;
									break;
								}
							}
						}
						}
					}
				}
			}
		}
	}
	cout<<"hi\n";;
}
}
}
	return 1;
}
