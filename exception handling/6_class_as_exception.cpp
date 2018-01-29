#include<iostream>
using namespace std;
class stu
{
	public:
	int rno;
	int m;
		void getdata()
		{
			cout<<"\nenter roll no : ";
			cin>>rno;
			cout<<"\nenter marks : ";
			cin>>m;
		}
		void display()
		{
			cout<<endl<<"ROLL NO : "<<rno;
			cout<<endl<<"marks : "<<m;
		}
};
int main()
{
	stu s;
	s.getdata();
	try
	{
		if(s.m<36)
		throw s;
		else
		s.display();
	}
	catch(stu t)
	{
		cout<<endl<<"marks less than required ....";
		cout<<endl<<"MARKS : "<<s.m;
	}
}
