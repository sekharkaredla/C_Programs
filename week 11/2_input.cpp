#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
        char name[80];int rno;int m[6];
        ofstream fileout;
        fileout.open("input.txt",ios::app);
        cout<<"\nEnter name , roll no , marks of 6 subjects : after entering press #:\n";
        while(1)
        {
        cin>>name;
        if(strcmp(name,"#")==0)
        break;
        cin>>rno;
        for(int i=0;i<6;i++)
        cin>>m[i];
        rno=733000+rno;
        fileout<<endl<<rno<<" "<<name;
        for(int i=0;i<6;i++)
        fileout<<" "<<m[i];
        }
return 1;
fileout.close();
}
