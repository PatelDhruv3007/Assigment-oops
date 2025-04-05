#include<iostream>
using namespace std;

class Person
{
    public :
    void display ()
    {
        cout<<"\nGood Morning";
    }
};
class Student :public Person
{

};
class Teacher:public Person
{
    
};

int main()
{
    Student s;
    s.display();

    Teacher t;
    t.display();
    return 0 ;
}