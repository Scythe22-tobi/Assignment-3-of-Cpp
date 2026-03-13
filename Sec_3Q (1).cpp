#include<iostream>
using namespace std;
int main()
{
	/*Q5.Scan gender from user.
	If gender is male,scan his age.
	If age is equal to or above 25,scan his salary and print age and salary both.
	If age is below 25,ask his birthyear and print.
	
	If gender is female,ask her birthyear(means scan her birthyear).Find her current age.
	If age is greater than or equal to 25,ask her salary and print.
	If age is less than 25,ask her how much salary she wants.Scan it and print it.*/
	
	 char gender;
    int age, birthyear, currentyear = 2026;
    float salary, expectedSalary;

    cout<<"Enter gender (M/F): ";
    cin>>gender;

    if(gender=='M' || gender=='m')
    {
        cout<<"Enter age: ";
        cin>>age;

        if(age >= 25)
        {
            cout<<"Enter salary: ";
            cin>>salary;

            cout<<"Age = "<<age<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
        else
        {
            cout<<"Enter birth year: ";
            cin>>birthyear;

            cout<<"\nBirth Year = "<<birthyear<<endl;
        }
    }
    else if(gender=='F' || gender=='f')
    {
        cout<<"Enter birth year: ";
        cin>>birthyear;

        age = currentyear - birthyear;

        if(age >= 25)
        {
            cout<<"Enter salary: ";
            cin>>salary;

            cout<<"Age = "<<age<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
        else
        {
            cout<<"Enter expected salary: ";
            cin>>expectedSalary;

			cout<<"Age = "<<age<<endl;
            cout<<"Expected Salary = "<<expectedSalary<<endl;
        }
    }
    else
    {
        cout<<"Invalid gender input";
    }

    return 0;
}
