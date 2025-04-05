#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"\n Enter the row count = ";
    cin>>row;

    for ( i = 1; i <=row; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
        
    }
    
    return 0 ;
}