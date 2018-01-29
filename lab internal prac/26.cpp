#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile;
	try
	{
	infile.open("std.in",ios::in);
	if(infile==NULL)
	throw -1;
	}
	catch(int a)
	{
		cout<<"\nFILE NOT OPENED .....";
		exit(-1);
	}
	char name[80];int roll;float m[3];
	while(infile>>name>>roll>>m[0]>>m[1]>>m[2])
	{
		cout<<"\n\nNAME : "<<name;
		cout<<"\nROLL NO : "<<roll;
		cout<<"\nAverage : "<<((m[0]+m[1]+m[2])/3);
	}
return 1;
}
