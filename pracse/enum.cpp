#include<iostream>
using namespace std;
int main()
{
	enum shape{cirle=1,rectangle=7,triangle=20
	};
	cout<<cirle<<" "<<triangle;
	shape ellipse=triangle;
	cout<<endl<<ellipse;
	int k;
	k=ellipse+1;
	cout<<endl<<k;
}
