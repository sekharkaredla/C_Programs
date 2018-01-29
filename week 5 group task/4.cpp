#include<iostream>
using namespace std;
class vector1
{
	int *v,n;
	public:
		void create();
		void modify();
		void multiply();
		void display();
};
void vector1::create()
{
	int i;
	cout<<"enter the size of the vector : ";
	cin>>n;
	v=new int[n];
	cout<<"\nenter the elements of the vector : \n";
	for(i=0;i<n;i++)
	cin>>v[i];
}
void vector1::modify()
{
	int p,ch;
	cout<<"\nenter the element to be modified : ";
	cin>>p;
	if(p>n)
	{
		cout<<"element number out of bounds ...";
		exit(-1);
	}
	cout<<"\nenter the modification : ";
	cin>>ch;
	v[p-1]=ch;
}
void vector1::multiply()
{
	int s,i;
	cout<<"\nenter the scalar to multiplied to the whole vector : ";
	cin>>s;
	for(i=0;i<n;i++)
	v[i]=v[i]*s;
}
void vector1::display()
{
	int i;
	cout<<"\n the vector is : \n";
	for(i=0;i<n;i++)
	cout<<"  "<<v[i];
}
int main()
{
	vector1 m;
	m.create();
	int flag=0;
	do
	{
		cout<<"\nenter 1 so as to modify an element \nenter 2 so as to multiply the vector by a scalar\nenter 3 so as to display the vector\nenter 4 to quit\n";
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1:m.modify();m.display();break;
			case 2:m.multiply();m.display();break;
			case 3:m.display();break;
			default : flag=1;
		}
	}while(flag==0);	
return 1;
}
