#include<iostream>
using namespace std;
class temp
{
	float f,c;
	public:
		void get();
		void cel();	
};
void temp::get()
		{
			cout<<"enter temp in fahrenheit : ";
			cin>>f;
		}
void temp::cel()
		{
			c=5*(f-32)/9;
			cout<<"temp in celcius is : "<<c;	
		}
int main()
{
	temp t;
	t.get();
	t.cel();
return 1;
}
