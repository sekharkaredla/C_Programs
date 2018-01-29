#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream filein;
	filein.open("test.txt",ios::in);
	int n;
	filein.seekg(0,ios::end);
	n=filein.tellg();
	cout<<"\nthe total number of charcters is : "<<n;
	cout<<"\nenter the cursor position from where the file is to be read : ";
	int m;char ch;
	cin>>m;
	filein.seekg(m,ios::beg);
	while(filein)
	{
		ch=filein.get();
		cout<<ch;
	}
	filein.close();
	return 1;
}
