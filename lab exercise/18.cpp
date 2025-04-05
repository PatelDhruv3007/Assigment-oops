#include<iostream>
using namespace std;

class Calculator
{
    public:
    int add(int num1,int num2)
    {
        void display();
        {
            cout<<"\naddition of "<<num1<<" and "<<num2<<" is = "<<num1+num2;
        }
        
    }
    int sub(int num1,int num2)
    {
        void display();
        {
            cout<<"\nsubtraction of "<<num1<<" and "<<num2<<" is = "<<num1-num2;
        }
        
    }
    int multi(int num1,int num2)
    {
        void display();
        {
            cout<<"\nmultiplication of "<<num1<<" and "<<num2<<" is = "<<num1*num2;
        }
        
    }
    int div(int num1,int num2)
    {
        void display();
        {
            cout<<"\ndivision of "<<num1<<" and "<<num2<<" is = "<<(float)num1/num2;
        }
        
    }
};
int main()
{
    int num1,num2,choice;
    cout<<"\nEnter the num1 value = ";
    cin>>num1;
    cout<<"\nEnter the num2 value = ";
    cin>>num2;

    cout<<"\npress '1' for addition";
    cout<<"\npress '2' for subtraction";
    cout<<"\npress '3' for multiplication";
    cout<<"\npress '4' for divition";
    cout<<"\nEnter your choice = ";
    cin>>choice;

    Calculator c;
    switch (choice)
    {
    case 1  :
        {
        c.add(num1,num2);
        break;
        }
        case 2  :
        {
        c.sub(num1,num2);
        break;
        }
        case 3  :
        {
        c.multi(num1,num2);
        break;
        }
        case 4  :
        {
        c.div(num1,num2);
        break;
        }
    default:
        break;
    }
    return 0 ;
}