#include<iostream>
using namespace std;
class player
{
	char name[100];
	int runs;
	int inn;
	int t;
	float avg;
	public:
		void getdata();
		void display();
};
void player::getdata()
{
	cout<<"enter name : ";
	cin>>name;
	cout<<"enter runs , innings , times not out : ";
	cin>>runs>>inn>>t;
}
void player::display()
{
	avg=float(1.0*runs/(inn-t));
	cout<<name<<"\t\t"<<runs<<"\t"<<inn<<"\t"<<t<<"\t\t"<<avg<<"\n";		
}
int main()
{
	int n,i;
	cout<<"\nenter the number of players : ";
	cin>>n;
	player *p=new player[n];
	cout<<"enter the details of "<<n<<" players : \n";
	for(i=0;i<n;i++)
	{
		p[i].getdata();
	}
	cout<<"PLAYER NAME\t"<<"RUNS\t"<<"INNINGS\t"<<"TIMES NOT OUT\t"<<"AVERAGE\n";
	for(i=0;i<n;i++)
	{
		p[i].display();
	}
return 1;
}
