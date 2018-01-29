#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	char s[80],ch;int l[8];int r,q,i,n,c;
	ofstream file;
	file.open("message.txt",ios::app);
	cout<<"\nenter the word : ";
	cin>>s;
	file<<"\nWord is : "<<s;		
	file<<"\nBinary is : ";
	for(i=0;i<strlen(s);i++)
	{
		ch=s[i];
		n=int(ch);
		for(c=0;c<8;c++)
		l[c]=0;
		c=0;
		while(n!=0)
		{
			q=n/2;
			r=n%2;
			l[7-(c++)]=r;
			n=q;
		}
		file<<endl;
		for(c=0;c<8;c++)
		file<<l[c];
	}
return 1;
}
