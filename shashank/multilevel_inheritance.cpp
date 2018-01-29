#include<iostream>
using namespace std;
class student
{
	protected:
		int rno;
	public:
		void getr(int n)
		{
			rno=n;
		}		
		void showr();
};
void student::showr()
{
	cout<<endl<<"ROLL NO : "<<rno;
}
class test:public student
{
	protected:
		float m1,m2;
	public:
		void getm(float a,float b)
		{
			m1=a;m2=b;
		}
		void showm()
		{
			cout<<endl<<"MARKS OF SUB1 AND SUB2 ARE : "<<m1<<"  "<<m2;
		}
};
class result:public test
{
	protected:
		float total;
	public:
		void tot()
		{
			total=m1+m2;
		}
		void display();
};
void result::display()
{
	showr();
	showm();
	if(total<90)
	cout<<endl<<"FAIL";
	else
	cout<<endl<<"PASS";
}
int main()
{
	result obj;int n;
	cout<<"\nenter your roll no : ";
	cin>>n;
	obj.getr(n);
	float a,b;
	cout<<"\nenter the marks of the subjects : ";
	cin>>a>>b;
	obj.getm(a,b);
	obj.tot();
	obj.display();
return 0;
}

