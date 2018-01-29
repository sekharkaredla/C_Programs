#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
	ifstream file1,file2;
	ofstream file3;
	try
	{
	file1.open(argv[1],ios::in);
	file2.open(argv[2],ios::in);
	if((file1==NULL)||(file2==NULL))
	throw 1;
	}
	catch(int i)
	{
		cout<<"\nfiles not opened properly ....";
		exit(-i);
	}
	char ch;
	file3.open("merge.txt",ios::app);
	while((ch=file1.get())!=EOF)
	{
		file3.put(ch);
	}
	while((ch=file2.get())!=EOF)
	{
		file3.put(ch);
	}
	file1.close();
	file2.close();
	file3.close();
return 1;
}
