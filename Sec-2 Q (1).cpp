#include<iostream>
using namespace std;
int main()
{
	//6.Declare and initialize an array of n integers.Copy it in another array in reverse order.
	
	int n;
	int i;
	cout<<"\nEnter the number of integers you want in the array=";
	cin>>n;
	
	int *p=new int [n];
	
	int *sq= new int [n];
	
	cout<<"\nEnter the "<<n<<" number of integers=";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	
	int *rev=new int [n];
	
	int j=0;
	i=n-1;
	
	while(i>=0)
	{
		*(rev+j)=*(p+i);
		i--;
		j++;
	}
	
	cout<<"\nThe reverse order is =";
	i=0;
	while(i<n)
	{
		cout<<*(rev+i)<<" ";
		i++;
	}
	
	delete []p;
	delete []rev;
	
	return 0;
}
