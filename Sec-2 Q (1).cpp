#include<iostream>
using namespace std;
int main()
{
	//1.Scan array of n integers.Copy it in another array.
	
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
	
	int *q=new int [n];
	
	for(i=0;i<n;i++)
	{
		*(q+i)=*(p+i);
	}
	
	for(i=0;i<n;i++)
	{
		cout<<*(q+i)<<" ";
	}
	
	delete []p;
	delete []q;
	return 0;
}
