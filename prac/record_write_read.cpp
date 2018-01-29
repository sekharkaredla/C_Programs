#include<iostream>
#include<fstream>
using namespace std;
class stu
{
	int rno;
	char name[80];
	public:
		void get()
		{
			cout<<"\nenter the name : ";
			cin>>name;
			cout<<"\nenter rno : ";
			cin>>rno;
		}
		void show()
		{
			cout<<"\nNAME : ";
			cin>>name;
			cout<<"\nRNO : ";
			cin>>rno;
		}
};
int main()
{
	fstream file;
	file.open("record.dat",ios::app|ios::in);
	stu s[3];
	for(int i=0;i<3;i++)
	{
		s[i].get();
	}
	file.write((char *)&s,sizeof(s));
	file.seekg(1*sizeof(s),ios::beg);
	file.read((char *)&s,sizeof(s));
	s[1].show();
	return 1;	
}
