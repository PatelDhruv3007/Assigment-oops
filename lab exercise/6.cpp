#include<iostream>
using namespace std;
int main()
{
    char a= 'a';
    int b=a;
    double c=10.25;
	int d= (int)c;

    cout<<"\nimplicit ";
    cout<<"\nvalue of char = "<<a;
    cout<<"\nvalue of int = "<<b;

    cout<<"\nexplicit ";
    cout<<"\nvalue of double = "<<c;
    cout<<"\nvalue of int = "<<d;
    return 0 ;
}