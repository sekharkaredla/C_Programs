#include<iostream>
using namespace std;
class stud
{
        char name[100];
        int m1,m2,m3;
        int roll,rank;
        float avg;
        public:
        void getdata()
        {
                cout<<"enter name , roll no , rank , marks of the subjects \n";
                cin>>name>>roll>>rank>>m1>>m2>>m3;
        }
        void aver()
        {
        avg=(m1+m2+m3)/3;
        }
        void display()
        {
        cout<<"\nname : "<<name;
        cout<<"\nroll no : "<<roll;
        cout<<"\naverage : "<<avg;
        cout<<"\nrank : "<<rank;
        }
};
int main()
{
        stud s;
        s.getdata();
        s.aver();
        s.display();
return 1;
}