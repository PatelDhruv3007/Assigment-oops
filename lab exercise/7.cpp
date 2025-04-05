#include<iostream>
using namespace std;
int main()
{
    int  num1,num2;
    cout<<"\nEnter the value of num1 = ";
    cin>>num1;
    cout<<"\nEnter the value of num2 = ";
    cin>>num2;

    cout<<"\nAreethmetic operator";
    cout<<"\naddition of "<<num1<<" and "<<num2<<" is = "<<num1+num2;
    cout<<"\nSubtaction of "<<num1<<" and "<<num2<<" is = "<<num1-num2;
    cout<<"\nDivision of "<<num1<<" and "<<num2<<" is = "<<(float)num1/num2;
    cout<<"\nMultiplication of "<<num1<<" and "<<num2<<" is = "<<num1*num2;
    cout<<endl;

    cout<<"\nRelational operator";
    cout<<"\n"<<num1<<" equal to "<<num2<<" is = "<<(num1 == num2);
    cout<<"\n"<<num1<<" not equal to "<<num2<<" is = "<<(num1 != num2);
    cout<<"\n"<<num1<<" less than  "<<num2<<" is = "<<(num1 > num2);
    cout<<"\n"<<num1<<" less than or equal to "<<num2<<" is = "<<(num1 >= num2);
    cout<<"\n"<<num1<<" greater than  "<<num2<<" is = "<<(num1 < num2);
    cout<<"\n"<<num1<<" greater than or equal to "<<num2<<" is = "<<(num1 <= num2);
    cout<<endl;

    cout<<"\nLogical operator ";
	cout<<"\n"<<num1<<" and "<<num2<<" is=" <<(num1 && num2);
	cout<<"\n"<<num1<<" OR "<<num2<<" is=" <<(num1 || num2);
	cout<<"\n"<<num1 <<"NOT is" <<(!num1);
	cout<<"\n"<<num2<<" NOT is=" <<(!num2);
	cout<<endl;

	cout<<"\nbit wise operator";
	cout<<"\n"<<num1<<" and "<<num2<<" is=" <<(num1 & num2);
	cout<<"\n"<<num1<<" OR "<<num2<<" is=" <<(num1 | num2);
	cout<<"\n"<<num1<<"Left shift is="<<(num1<<2);
	cout<<"\n"<<num1<<"Right shift is="<<(num1>>2);
    cout<<endl;
    
    return 0 ;
}