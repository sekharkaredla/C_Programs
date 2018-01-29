#include<iostream>
using namespace std;
class pass
{
	char p[80];
	public:
		void get()
		{
			cin>>p;
		}
		void dis()
		{
			cout<<p;
		}
		friend void show(pass);
};
void show(pass m)
{
	cout<<m.p;
}
int main()
{
	pass m;
	m.get();
	show(m);
}
