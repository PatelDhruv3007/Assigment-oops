#include<iostream>
using namespace std;
int main()
{
    int size,a[100][100],b[100][100],i,j,ans[i][j];

    cout<<"\nEnter the size of array = ";
    cin>>size;

    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size;j++)
        {
            cout<<"Enter the a["<<i<<"]"<<"["<<j<<"]=";
			cin>>a[i][j];
        }
    }
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size;j++)
        {
            cout<<"Enter the b["<<i<<"]"<<"["<<j<<"]=";
			cin>>b[i][j];
        }
    }
    cout<<"\nelement of a=\n";
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nelement of a=\n";
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size;j++)
        {
            ans[i][j]=a[i][j]+b[i][j];
        }
        cout<<"\n";
    }
    cout<<"matrix sum =\n";
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}
	
    
    return 0 ;
}