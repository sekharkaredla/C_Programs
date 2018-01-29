#include<iostream>
using namespace std;
class sample
{
	static int count;
	public:
		sample()
		{
			count++;
		}
		void showcount()
		{
			cout<<"\ncount is : "<<count;
		}
};
int sample::count;
int main()
{
	sample s1;
	s1.showcount();
	sample *p=new sample[1000];
	p[354].showcount();
	return 0;
}
