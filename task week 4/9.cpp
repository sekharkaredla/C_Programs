#include<iostream>
using namespace std;
void towers(int,char,char,char);
int main()
{
	int n; //Declare the variables to be used
			//Get the input for number of disks
	cout<<"enter the no of disks : ";
	cin>>n;
	towers(n,'A','C','B'); //Call the function
	return 1;
}
 
void towers(int n,char from,char to,char aux)
{
	if(n==1) // If there is only one disk
	{
		cout<<endl<<"move 1 from peg "<<from<<" to "<<to;
		return;
	}
	towers(n-1,from,aux,to); //Recursive Call
	cout<<endl<<"move "<<n<<" from peg "<<from<<" to "<<to;
	towers(n-1,aux,to,from);
}
