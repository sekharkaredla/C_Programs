#include<iostream>
using namespace std;
class student 
{
	char name[80];
	int roll;
	int m[3];
	float avg;
	public:
			void getdata()
			{
				cout<<"enter name"<<" enter rollno"<<" enter the marks\n";
				cin>>name>>roll>>m[0]>>m[1]>>m[2];
			}
			float average()
			{
				avg=(m[1]+m[2]+m[0])/3;
				return avg;
			}
};
int main()
{
	float f,k;k=0.1;
	student s;
	s.getdata();
	f=s.average();
	cout<<"average is "<<f;
return 1;
}
