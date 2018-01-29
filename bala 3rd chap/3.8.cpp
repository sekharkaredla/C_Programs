#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float i,j;float r;FILE *fp;int k;
	fp=fopen("result3.8.txt","w");
	fprintf(fp,"X");
	fseek(fp,1,SEEK_SET);
	for(i=0.1;i<=1.0;i=i+0.1)
	fprintf(fp,"\t%f",i);
	for(i=0.0;i<10.0;i=i+1.0)
	{k=i;
		fprintf(fp,"\n%d",k);
		for(j=i+0.1;j<=i+0.9;j=j+0.1)
		{
			r=exp(-j);
			fprintf(fp,"\t%f",r);
		}
	}
	cout<<"\n the tabular form has been successfully stored in result3.8 .";
	return 0;
}

