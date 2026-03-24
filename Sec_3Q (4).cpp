#include<iostream>
using namespace std;
int main()
{
	float a, b;
    int choice;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Enter a number between 1 to 4:"<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Division"<<endl;
    cout<<"4. Multiplication";
	cout<<"\nEnter your choice=";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Addition = "<<a + b;
            break;

        case 2:
            cout<<"Subtraction = "<<a - b;
            break;

        case 3:
            cout<<"Division = "<<a / b;
            break;

        case 4:
            cout<<"Multiplication = "<<a * b;
            break;

        default:
            cout<<"Invalid choice";
    }

    return 0;
}
