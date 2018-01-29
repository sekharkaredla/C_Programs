#include<iostream>
#include<fstream>
using namespace std;
const int N=80;
int main()
{
	ofstream outfile;
	outfile.open("data.txt",ios::out);
	char line[N];
	cout<<"\nenter data line be line ...\n";
	while(fgets(stdin,N,outfile))
	{
		outfile<<line;outfile<<"\n";
	}
	return 1;
}
