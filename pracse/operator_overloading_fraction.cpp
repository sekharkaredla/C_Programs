#include<iostream>
using namespace std;
class fraction
{
	int n;
	int d;
	public:
		fraction()
		{n=d=1;}
		fraction(int a,int b)
		{
			n=a;d=b;
		}
		void display();
		fraction operator+(fraction &);
		fraction operator-(fraction &);
		friend fraction operator*(fraction &,fraction &);
		friend fraction operator/(fraction &,fraction &);
};
void fraction::display()
{
	cout<<endl<<n<<'/'<<d;
}
fraction fraction::operator+(fraction &s)
{
	fraction temp;
	temp.n=n*s.d+s.n*d;
	temp.d=d*s.d;
	return temp;
}
fraction fraction::operator-(fraction &s)
{
	fraction temp;
	temp.n=n*s.d-s.n*d;
	temp.d=d*s.d;
	return temp;
}
fraction operator*(fraction &a,fraction &b)
{
	fraction temp;
	temp.n=a.n*b.n;
	temp.d=a.d*b.d;
	return temp;
}
fraction operator/(fraction &a,fraction &b)
{
	fraction temp;
	temp.n=a.n*b.d;
	temp.d=a.d*b.n;
	return temp;
}
int main()
{
	fraction f1(2,3),f2(4,7),f3;
	f3=f1/f2;
	f3.display();
	return 1;	
}

