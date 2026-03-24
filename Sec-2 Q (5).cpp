#include<iostream>
using namespace std;
int main()
{
	//5.Declare and initialize an array of n integers.Find the largest value from array.
	
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
	int max;
	max=*(p);
	
	for(i=0;i<=n-1;i++)
	{
		if(max<*(p+i))
		{
			max=*(p+i);
		}
	}
	
	cout<<"\nThe largest number is ="<<max;
	
	delete []p;
	
	return 0;
}
