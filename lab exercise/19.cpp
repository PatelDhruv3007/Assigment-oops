#include<iostream>
using namespace std;

class BankAccount
{
    double  balance ,deposit,withdraw;
    public:
    void Balance(double b)
    {
        balance = b;
        cout<<"\nBalance = "<<balance;
    }
    void Withdraw(double w)
    {
        withdraw =w;
        if (balance>w & balance>0)
        {
            balance=balance-w;
            cout<<"balance after withdraw: "<<balance;
        }
        else
        {
            cout<<"Enter sufficient amount";
        }
        
    }
    void Deposite(double d)
    {
        deposit =d;
        balance=balance+d;
        cout<<"balance after deposit="<<balance;
    }

};

int main()
{
    int choice;
    double w,d;
    
    BankAccount b;
    b.Balance(100000);

    cout<<"\nPress '1' for withdraw ";
    cout<<"\nPress '2' for deposite ";
    cout<<"\nEnter your choice = ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\nEnter the amount you have to withdraw = ";
        cin>>w;

        b.Withdraw(w);
    break;
    case 2:
        cout<<"\nEnter the amount you have to deposite = ";
        cin>>d;

        b.Deposite(d);
    break;
    
  
    }
    return 0 ;
} 