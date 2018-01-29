#include<iostream>
using namespace std;
class sample
{
	static int s;
	int b;
	public:
		sample()
		{
			s++;b=91;
		}
		static void show();
		void showb();
};
int  sample::s;
void sample::show()
{
	cout<<"\nS is : "<<s;
}
void sample::showb()
{
	cout<<"\nB is : "<<b;
}
int main()
{
	sample s1;
	sample::show();
	s1.showb();
return 1;
}

