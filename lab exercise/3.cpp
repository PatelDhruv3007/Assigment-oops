#include<iostream>
using namespace std;
//oop
class Area
{
    private :
    int length,width;
    public :
    void set(int l,int w)
    {
        length = l;
        width = w;
    }
    void display()
    {
        cout<<"Are of rectangle is = "<<length*width;
    }
};
//pop
int area(int l,int w)
{
    return l*w;
}
int main()
{
    int length,width;
    cout<<"Enter the value of length = ";
    cin>>length;
    cout<<"Enter the value of width = ";
    cin>>width;

    //oop
    Area a1;
    a1.set(length,width);
    a1.display();
    //pop
    int ans=area(length,width);
    cout<<"\nthe area of rectangle is = "<<ans;

return 0;
}