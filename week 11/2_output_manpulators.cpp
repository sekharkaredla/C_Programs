#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile;
	infile.open("input.txt",ios::in);
	int rno,m[6],i;i=0;
	char name[80];
	cout<<"------------------------------------------\n";
	cout.width(3);
	cout<<"SNO";
	cout.width(10);
	cout<<"Rollno";
	cout.width(15);
	cout<<"Name";
	cout.width(12);
	cout<<"Precentage";
	cout<<"\n------------------------------------------\n";
	while(!infile.eof())
	{
		float p=0;
		infile>>rno>>name;
		for(int i=0;i<6;i++)
		{
			infile>>m[i];p=p+m[i];
		}
		p=p/6;
		cout<<endl;
		cout.width(3);
		cout<<++i;
		cout.width(10);
		cout<<rno;
		cout.width(15);
		cout<<name;
		cout.width(12);
		cout<<p;
	}
	return 1;
}
