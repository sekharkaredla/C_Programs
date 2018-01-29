#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int rno;
	char name[80];
	float marks;
	public:
		void getdata()
		{
			cout<<"\nenter name : ";
			cin>>name;
			cout<<"\nenter roll no : ";
			cin>>rno;
			cout<<"\nenter marks : ";
			cin>>marks;
		}
		void display()
		{
			cout<<"\n\n\nNAME : "<<name;
			cout<<"\nROLL NO : "<<rno;
			cout<<"\nMARKS : "<<marks;
		}
};
int main()
{
	student stu;
	ofstream fileout;
	fileout.open("record.dat",ios::app);
	ifstream filein("record.dat");
	cout<<"\npress 1 for a new record , \npress 2 to retrieve the data \n: ";
	int n;
	cin>>n;
	switch(n)
	{
		case 1:{stu.getdata();
		fileout.write((char*)&stu,sizeof(stu));
			break;
			}
		case 2:{while(filein.read((char*)&stu,sizeof(stu)))
		{
			stu.display();
		}
			break;
		}
		default:cout<<"\nwrong option ...";
	}
	return 1;
}
