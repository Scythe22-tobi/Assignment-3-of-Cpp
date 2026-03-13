#include<iostream>
using namespace std;
int main()
{
	/*7.Declare and initialize an array of 8 integers.Find the largest value from array.(pointer notation*/
	
	int num[8]={123,64,82,62,938,639,983,849};
	int *p=num;
	int max=*(p);
	int i;
	for(i=0;i<=7;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
		}	
	}
	
	cout<<"\nLargest = "<<max;
	
	return 0;
	
}
