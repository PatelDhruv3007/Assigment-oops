#include<iostream>
using namespace std;
//global scope
int a = 10;
void loc(int b)
{
    cout<<"\nthis is local variable = "<<b;
    cout<<"\nthis is local variable = "<<a;
}
int main()
{
    int b=22;
    
    return 0 ;
}