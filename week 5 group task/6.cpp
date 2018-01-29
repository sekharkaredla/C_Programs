#include<iostream>
using namespace std;
int m1,m2;
class student
{
	char name[80],add[100];
	int rno,t;
	float avg;

	int m[6];
	public:
		student()
		{
		avg=0;t=0;
		}
		void readata()
		{
			int i;
			cout<<"\nenter name : ";
			cin>>name;
			cout<<"\nenter roll no : ";
			cin>>rno;
			cout<<"\nenter the address : ";
			cin>>add;
			cout<<"\nenter the marks of 6 subjects : ";
			for(i=0;i<6;i++)
			cin>>m[i];
		}
		void percent()
		{
			int i;
			for(i=0;i<6;i++)
			t+=m[i];
			avg=t/6.0;
		}
		void display()
		{
			int i;
			cout<<"\n\n\nNAME : "<<name;
			cout<<"\nADDRESS : "<<add;
			cout<<"\nROLL NO : "<<rno;
			cout<<"\nTOTAL MARKS : "<<t;
			cout<<"\nPERCENTAGE : "<<avg;
			cout<<"\n marks of individual subjects : \n";
			for(i=0;i<6;i++)
			{
				cout<<"\nmarks subject "<<i+1<<" : "<<m[i];
			}
		}
		friend void class_average(student s[],int n)
		{m1=0;float cavg,t;
			for(int i=0;i<n;i++)
			{
				if(m1<s[i].avg)
				m1=s[i].avg;
			}
			m2=m1;
			for(int i=0;i<n;i++)
			{
				if(m2>s[i].avg)
				m2=s[i].avg;
			}t=0;
			for(int i=0;i<n;i++)
			t+=s[i].avg;
			cavg=float(t/n);
			cout<<"\nthe minimum is : "<<m2;
			cout<<"\nthe maximum is : "<<m1;
			cout<<"\nclass average is : "<<cavg;
		}
		friend void decending(student s[],int n)
		{
			float *avg1=new float[n];
			for(int i=0;i<n;i++)
			avg1[i]=s[i].avg;
			int i,j,k1=0,f=0;
			for(j=0;j<n;j++)
			{m1=0;
				for(i=0;i<n;i++)
				{
				if(m1<s[i].avg)
				{
				k1=i;	
				m1=s[i].avg;
				}
				}
				s[k1].display();
				s[k1].avg=0;
	     	}
			for(int i=0;i<n;i++)
			s[i].avg=avg1[i];
		/*	student temp;
			int i,j;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n-1-i;j++)
				{
					if(s[j].avg<s[j+1].avg)
					{
						temp=s[j];
						s[j]=s[j+1];
						s[j+1]=temp;
					}
				}
			}*/
			
		}
		friend void topn(student s[],int n,int p)
		{
			float *avg1=new float[n];
			for(int i=0;i<n;i++)
			avg1[i]=s[i].avg;
			int i,j,k1=0,f=0;
			for(j=0;j<n;j++)
			{m1=0;
				for(i=0;i<n;i++)
				{
				if(m1<s[i].avg)
				{
				k1=i;	
				m1=s[i].avg;
				}
				}
				if(f<=p)
				{
				s[k1].display();
				s[k1].avg=0;f++;
				}
				else
				break;
	     	}
			for(int i=0;i<n;i++)
			s[i].avg=avg1[i];
		}
};
int main()
{
	int n;
	cout<<"\nenter the number of students : ";
	cin>>n;
	student *s=new student[n];
	cout<<"\nenter the data of "<<n<<" students : ";
	int i;
	for(i=0;i<n;i++)
	{
		s[i].readata();
		s[i].percent();
	}
	int ch;
	cout<<"\nenter 1 display all student details \nenter 2 descending order view \nenter 3 to see top n students \nenter 4 to display class average , lowest ,highest : \n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				for(i=0;i<n;i++)
				s[i].display();
			}break;
		case 2:
			{
				decending(s,n);
			}break;
		case 3:
			{
				int p;
				cout<<"\nenter the value of n : ";
				cin>>p;
				topn(s,n,p);
			}break;
		case 4:
			{
				class_average(s,n);	
			}break;
		default:cout<<"wrong choice .....";
	}
return 1;
}		
	

