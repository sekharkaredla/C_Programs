#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile;ofstream outfile;
	char n[80],ch;
	cout<<"\nenter the name of the file : ";
	cin>>n;
	infile.open(n,ios::in);
	outfile.open("reverse.txt",ios::out);
	infile.seekg(0,ios::end);
	int l=infile.tellg();
	cout<<"\nno of characters in input file : "<<l;
	int i;
	for(i=1;i<=l;i++)
	{
		infile.seekg(-1*i,ios::end);
		ch=infile.get();
		outfile.put(ch);
	}
	return 1;
	
}
