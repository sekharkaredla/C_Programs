#include<iostream>
using namespace std;
template<class k>
void swap(k *a,k *b)
{
	k t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	char a,b;int m,n;
	cout<<"\nenter 2 numbers : ";
	cin>>m>>n;
	cout<<"\nenter two characters : ";
	cin>>a>>b;
	swap(&m,&n);
	swap(&a,&b);
	cout<<"\nafter swap :- \n";
	cout<<m<<" "<<n<<endl;
	cout<<a<<" "<<b;
	return 1;
}
