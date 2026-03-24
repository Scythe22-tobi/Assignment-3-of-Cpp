#include<iostream>
using namespace std;
int main()
{
	//3.Scan array of n characters from user.Count how many of them are uppercase alphabets.
	
	char *p;
	int i;
	int calpha=0;
	int n;
	cout<<"\nEnter the number of Characters you want =";
	cin>>n;
	
	p= new char [n];
	
	cout<<"\nEnter the characters ";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	
	for(i=0;i<n;i++)
	{
		if(*(p+i)>='A' && *(p+i)<='Z')
		{
			calpha++;
		}
	}
	
	cout<<"\nThe number of Capital letters are ="<<calpha;
	
	delete []p;
	return 0;
	
	
}
