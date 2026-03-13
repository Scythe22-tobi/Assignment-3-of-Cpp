#include<iostream>
using namespace std;
int main()
{
	/*Q3.
	You are an employee in a Company.Your task is to calculate bonus for diwali and print
	total salary(basic salary+bonus).Bonus should be calculated by using following conditions.
	-if salary is more than 15000/-, bonus will be 20% of salary.
	-if salary is less than or equal to 15000/-, bonus will be 25% of salary.
	Print toal salary of employee for the month of Diwali.Input from user is basic salary.*/
	
	float salary, bonus, total;

    cout<<"Enter basic salary: ";
    cin>>salary;

    if(salary > 15000)
    {
        bonus = salary * 20/100;
    }
    else
    {
        bonus = salary * 25/100;
    }

    total = salary + bonus;

    cout<<"Bonus = "<<bonus<<endl;
    cout<<"Total Salary for Diwali Month = "<<total;

    return 0;
}
