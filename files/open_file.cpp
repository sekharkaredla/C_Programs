#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main()
{
        cout<<"\ntype the file name to be opened : ";
        char name[80];
        cin>>name;
        ifstream openf;
        openf.open(name,ios::in);
        char ch;
        while((ch=openf.get())!=EOF)
        {
                cout<<ch;
        //      if(ch=='\n')
        //      cout<<endl;
        //      fprintf(stdout,"%c",ch);
        }
return 1;
}
