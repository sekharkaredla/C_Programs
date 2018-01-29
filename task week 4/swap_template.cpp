#include<iostream>
using namespace std;
template<class T>
void swap1(T &x,T &y)
{
	T p=x;
	x=y;
	y=p;
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap1(a,b);
	cout<<endl<<a<<" "<<b;
	return 1;
}
