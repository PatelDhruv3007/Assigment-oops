#include<iostream>
using namespace std;
int main()
{
    int size,a[100],i,sum=0;

    cout<<"\nEnter the size of array = ";
    cin>>size;

    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the a["<<i<<"]=";
        cin>>a[i];
    }
    for (size_t i = 0; i < size; i++)
    {
        sum +=a[i];
    }  
    cout<<"Sum of the array is = "<<sum;
    cout<<"\nthe average of array is ="<<(float)sum/size; 
    
    
    return 0 ;
}