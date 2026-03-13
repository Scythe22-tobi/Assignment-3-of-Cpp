#include<iostream>
using namespace std;
int main()
{
	/*4.Scan array of 8 integers from user.Print addition of all integers in array.
	(pointer notaion)
	*/
	
	int num[8];
	int *p;
	p=&num[0];
	int i;
	
	cout<<"\nEnter 8 integers =";
	i=0;
	
	while(i<8)
	{
		cin>>*(p+i);
		i++;
	}
	
	int add=0;
	
	i=0;
	while(i<8)
	{
		add += *(p+i);
		i++;
	}
	
	cout<<"\nAddition ="<<add;
	
	return 0;
	
}
