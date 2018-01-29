#include<iostream>
using namespace std;
class complex1
{
	int i,r;
	public:
		void get(int a,int b)
		{
			r=a;i=b;
		}
		void show()
		{
			cout<<r<<" + "<<i<<"i";
		}
		void operator++(int);
};
void complex1::operator++(int)
{
	this->i++;
	this->r++;
}
int main()
{
	complex1 com;
	com.get(5,10);
	com++;
	com.show();
	return 1;
}
