#include<iostream>
using namespace std;
class student
{
	protected:
		int rno;
		void getr(int n)
		{
			rno=n;
		}
		void showr()
		{
			cout<<endl<<"ROLL NO : "<<rno;
		}
};
class test:public student
{
	protected:
		float m1,m2;
		void getm(float a,float b)
		{
			m1=a;m2=b;
		}
		void showm()
		{
			cout<<endl<<"MARKS OF S1 AND S2 are : "<<m1<<"  "<<m2;
		}
};
class sports
{
	protected:
		float sport;
		void getsp(float a)
		{
			sport=a;
		}
		void showsp()
		{
			cout<<endl<<"the sports weightage is : "<<sport;
		}
};
class result:public test,public sports
{
	float t;
	public:
		void res(int m,float a,float b,float c)
		{
			getr(m);
			getm(a,b);
			getsp(c);
			t=((m1+m2)+sport)/2;
		}
		void display()
		{
			showr();
			showm();
			showsp();
			cout<<endl<<"the average is : "<<t;
			if(t>40)
			cout<<endl<<"PASS";
			else
			cout<<endl<<"FAIL";
		}
};
int main()
{
	result obj;
	obj.res(5204,91.5,93.0,82.0);
	obj.display();
}
