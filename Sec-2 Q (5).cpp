#include<iostream>
using namespace std;
int main()
{
	/*4.Declare and initialize an array of n integers.Store square of all elements of this array in another array.
	Print both arrays.
	*/
	
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
	
	for(i=0;i<=n-1;i++)
	{
		*(sq+i)=*(p+i) * *(p+i);
	}
	
	cout<<"\nThe entered array =";
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	
	cout<<"\nThe Squares array =";
	for(int i=0;i<n;i++)
	{
		cout<<*(sq+i)<<" ";
	}
	
	delete []p;
	delete []sq;
	
	return 0;
	
}
