#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float p,v,n,r;FILE *fp;char ch;
	fp=fopen("result3.4.txt","w");
	fputs("3.4 PROBLEM REULTS \n ---------------------------------------------------------------- \n",fp);
	fputs("P\t\tr\t\tn\t\t\tV\n",fp);
	for(p=1000;p<=10000;p=p+1000)
	{
		for(r=0.10;r<=0.21;r=r+0.01)
		{
			for(n=1;n<=10;n++)
			{
				v=p*(pow((1+r),n));
				fprintf(fp,"\n%f\t%f\t%f\t\t%f",p,r,n,v);
			}
		}
	}
	fclose(fp);
	cout<<"the results have been stored int the text file result3.4.txt .";
	return 1; 
}
