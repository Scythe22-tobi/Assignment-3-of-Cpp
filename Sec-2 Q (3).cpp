#include<iostream>
using namespace std;
int main()
{
	//2.Scan array of n integers from user.Print addition of all integers in array.
	
	int *p;
	int i;
	int n;
	cout<<"\nEnter the number of integers you want =";
	cin>>n;
	
	p= new int [n];
	cout<<"\nEnter the numbers ";
	
	for(int i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	
	int add;
	for(int i=0;i<n;i++)
	{
		add += *(p+i);
	}
	
	cout<<"\nAddition = "<<add;
	
	delete []p;
	return 0;
}
