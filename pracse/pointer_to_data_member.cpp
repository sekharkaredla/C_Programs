#include<iostream>
using namespace std;
class sample
{
	int a;
	int b;
	public:
		sample()
		{
			a=10;b=20;
		}
		void show()
		{
			cout<<"\nA is :"<<a;
			cout<<"\nB is :"<<b;
		}
		friend int sum(sample *s,sample S)
		{
			int sample::*ptr1=&sample::a;
			int sample::*ptr2=&sample::b;
			int temp;
			temp=S.*ptr1+s->*ptr2;
			return temp;
		}
};
int main()
{
	sample s1;
	s1.show();
	cout<<endl<<sum(&s1,s1);
	return 1;
}
