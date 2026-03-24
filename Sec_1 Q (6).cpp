#include<iostream>
using namespace std;
int main()
{
	/*6.Declare and initialize an array of 6 integers.Store square of all elements of this array in another array.
	Print both arrays.
	(pointer notaion)*/
	
	int num[6]={23,78,075,31,67,22};
	
	int sq[6];
	
	int i;
	
	for(i=0;i<=5;i++)
	{
		sq[i]= num[i] * num[i];
	}
	
	i=0;
	while(i<6)
	{
		cout<<"\nSqure of "<<num[i]<<" is ="<<sq[i];
		i++;
	}
	
	return 0;
}
