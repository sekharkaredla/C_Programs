#include<iostream>
#include<fstream>
using namespace std;
void openfile()
{
	cout<<"\nenter the file name : ";
	char n[80],ch;
	cin>>n;
	ifstream file;
	try
	{
	file.open(n,ios::in);
	if(file==NULL)
	throw 1;
	}
	catch(int a)
	{
		cout<<"\nfile not existing ....";
		exit(-1);
	}
	while((ch=file.get())!=EOF)
	{
		cout<<ch;
	}
}
int main()
{
	openfile();
	return 1;
}
