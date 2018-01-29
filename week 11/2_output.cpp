#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile;
	infile.open("input.txt",ios::in);
	int rno,m[6],i;i=0;
	char name[80];
	cout<<"\n----------------------------------\n";
	cout<<"SNO\tRoll no\tName\tPercentage";
	cout<<"\n----------------------------------";
	while(!infile.eof())
	{
		float p=0;
		infile>>rno>>name;
		for(int i=0;i<6;i++)
		{
			infile>>m[i];p=p+m[i];
		}
		p=p/6;
		cout<<endl<<++i<<"\t"<<rno<<"\t"<<name<<"\t"<<p;
	}
	return 1;
}
