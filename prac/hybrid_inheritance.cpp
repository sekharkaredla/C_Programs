#include<iostream>
using namespace std;
class student
{
        protected:
        int rno;
        public:
                void getrno()
                {
                        cout<<"\nenter the roll no : ";
                        cin>>rno;
                }
                void disrno()
                {
                        cout<<"\nROLL NO : "<<rno;
                }
};
class test:public student
{
        protected:
        float marks;
        public:
                void getmarks()
                {
                        cout<<"\nenter the marks : ";
                        cin>>marks;
                }
                void dismarks()
                {
                        cout<<"\nMARKS : "<<marks;
                }
};
class sports
{
        protected:
        float sp;
        public:
                void getsp()
                {
                        cout<<"\nenter sports weightage : ";
                        cin>>sp;
                }
                void showsp()
                {
                        cout<<"\nSPORTS WEIGHTAGE : "<<sp;
                }
};
class result:public test,public sports
{
        float net;
        public:
                void shownet()
                {
                        net=(marks+sp)/2;
                        cout<<"\nROLL NO : "<<rno;
                        cout<<"\nNET SCORE : "<<net;
                }
};
int main()
{
        result obj;
        obj.getrno();
        obj.getmarks();
        obj.getsp();
        obj.disrno();
        obj.dismarks();
        obj.showsp();
        obj.shownet();
return 1;
}
