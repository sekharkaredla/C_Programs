#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char n[80],m[80],ch;
	ifstream infile;
	ofstream outfile;
	cout<<"\nenter the file to be copied : ";
	cin>>n;
	cout<<"\nenter the name of destination file : ";
	cin>>m;
	infile.open(n,ios::in);
	outfile.open(m,ios::out);
	while((ch=infile.get())!=EOF)
	{
		outfile.put(ch);
	}
	return 1;
}
