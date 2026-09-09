#include <iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    string div, cls, name;

    //Default Constructor
    Student()
    {
        cout<<"I am default constructor\n";
    }

    //parameterized constructor:
    Student(int rn, string d,string c,string n)
    {
        rollno=rn;
        div=d;
        cls=c;
        name=n;
    }
    //Copy constuctor:
    Student(Student &s)
    {
        rollno=s.rollno;
        div=s.div;
        cls=s.cls;
        name=s.name;
    }

    void display()
    {
        cout<<"\n Roll no:"<<rollno;
        cout<<"\n Name:"<<name;
        cout<<"\n Class:"<<cls;
        cout<<"\n Division:"<<div<<"\n";
   }
};
int main()
{
    Student s,s1(120,"c", "sy", "Akshata");
    s1.display();
    Student s2(s1);
    s2.display();
    return 0;
}