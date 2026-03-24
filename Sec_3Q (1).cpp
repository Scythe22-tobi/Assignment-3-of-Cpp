#include<iostream>
using namespace std;
int main()
{
	 /*Q1.
	Scan necessary data to find simple interest.If simple interest is greater than 5000/-,
	ask user to buy equity of total amount(principle and simple interest).
	If simple interest is less than or equal to 5000/-,ask user to invest total amount in mutual fund.
	(if else code,you can't use switch case here.)*/
	

    float p, r, t, si, total;

    cout<<"\nEnter Principle amount: ";
    cin>>p;

    cout<<"\nEnter Rate of Interest: ";
    cin>>r;

    cout<<"\nEnter Time (in years): ";
    cin>>t;

    si = (p * r * t) / 100;
    total = p + si;

    cout<<"\nSimple Interest = "<<si<<endl;
    cout<<"\nTotal Amount = "<<total<<endl;

    if(si > 5000)
    {
        cout<<"\nBuy equity of total amount "<<total;
    }
    else
    {
        cout<<"\nInvest total amount "<<total<<" in mutual fund";
    }

    return 0;

}
