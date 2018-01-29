#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        cout<<"\nenter the file name to be copied : ";
        char n1[80];
        cin>>n1;
        cout<<"\nenter the destination file name : ";
        char n2[80];
        cin>>n2;
        ifstream filein;
        filein.open(n1,ios::in);
        ofstream fileout;
        fileout.open(n2,ios::out);
        char ch;
        while((ch=filein.get())!=EOF)
        {
        fileout<<ch;
        }
        filein.close();
        fileout.close();
return 1;
}
