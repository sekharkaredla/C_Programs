#include<iostream>
using namespace std;
struct stu
{
	char n[100];
	int roll;
	int rank;
};
class student
{
	struct stu s;
	public:
	void getdata(void);
	void display(void);
};
void student::getdata(void)
{
	cout<<"enter the name : ";
	cin>>s.n;
	cout<<"enter roll no : ";
	cin>>s.roll;
	cout<<"enter the rank : ";
	cin>>s.rank;
}
void student::display(void)
{
	cout<<"\nname : "<<s.n;
	cout<<"\nroll : "<<s.roll;
	cout<<"\nrank : "<<s.rank;
}
int main()
{
	student s;
	s.getdata();
	s.display();
return 1;
}
