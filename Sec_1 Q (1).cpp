#include<iostream>
using namespace std;
int main()
{
	/*8.Declare and initialize an array of 8 integers.Copy it in another array in reverse order.
	([] notation)*/
	
	int num[8]={123,64,82,62,938,639,983,849};
	int i,j;
	int reverse[8];
	
	i=0;
	j=7;
	while(i<8)
	{
		reverse[j]=num[i];
		i++;
		j--;
	}
	
	for(i=0;i<8;i++)
	{
		cout<<reverse[i]<<" ";
	}
	
	return 0;
}
