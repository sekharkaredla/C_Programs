#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        char name[80];
        cout<<"\nenter the name of the file : ";
        cin>>name;
        ofstream newfile;
        newfile.open(name,ios::out);
        cout<<"\nenter the data of the file and press ~ to exit ...";
        char ch;
        while((ch=getchar())!='~')
        {
        newfile<<ch;
        }
return 1;
}
