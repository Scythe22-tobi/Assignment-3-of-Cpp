#include<iostream>
using namespace std;
int main()
{
	//3.Scan array of 5 integers.Copy it in another array.
	//([] method)
	
	int num[5];
	cout<<"Enter 5 integers =";
	int i=0;
	while(i<5)
	{
		cin>>num[i];
		i++;
	}
	
	int copy[5];
	
	i=0;
	while(i<5)
	{
		copy[i]=num[i];
		i++;
	}
	
	i=0;
	while(i<5)
	{
		cout<<copy[i]<<" ";
		i++;
	}
	
	return 0;
}
