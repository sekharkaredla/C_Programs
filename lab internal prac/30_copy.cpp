#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	char str[80];
	ofstream file;
	file.open("data.txt",ios::out);
	cout<<"\nenter data ,, press ~ to exit : \n";
	while(1)
	{
		cin>>str;
		if((strcmp(str,"~"))==0)
		break;
		file<<str<<endl;
	}
return 1;
}
