#include<iostream>
using namespace std;
int main()
{
	//5.Scan array of 6 characters from user.Count how many of them are uppercase alphabets.([] method)
	
	char ch[6];
	
	int i;
	cout<<"\n Enter 6 characters =";
	for(i=0;i<=5;i++)
	{
		cin>>ch[i];
	}
	
	int calpha=0;
	
	i=0;
	while(i<6)
	{
		if(ch[i]>='A' && ch[i]<='Z')
		{
			calpha++;
		}
		i++;
	}
	
	cout<<"\nThe total number of upper alphabets ="<<calpha;
	
	return 0;

}
