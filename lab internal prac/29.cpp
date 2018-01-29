#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char ch;int n,v,w,k;n=v=w=k=0;
	cout<<"\nenter the input ; to exit press '~' : ";
	while((ch=getchar())!='~')
	{
		if(ch=='\n')
		n++;
		else if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
		v++;
		else if(ch==' ')
		w++;
		k++;
	}
	cout<<setw(20)<<std::left<<"\nlines : ";cout<<setw(5)<<std::right<<n; //left adjusted strings , right adjusted values
	cout<<setw(20)<<std::left<<"\nvowels : ";cout<<setw(5)<<std::right<<v;	
	cout<<setw(20)<<std::left<<"\nwords : ";cout<<setw(5)<<std::right<<w;
	cout<<setw(20)<<std::left<<"\ncharacters : ";cout<<setw(5)<<std::right<<k;
return 1;
	
}
