#include <iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    string name;
    string cls;
    string div;
    int marks;
    
    public:
    
    //Default constructor-1

    Student()
    {
        cout<<"I am Default constructor\n";
    }

    //Parameterized constructor 1-2
    Student(int rn, string nm,string c)
    {
        rollno=rn;
        name=nm;
        cls=c;
    }

     //Parameterized constructor 2-3
    Student(int ma, string d)
    {
        marks=ma;
        div=d;
    }
    //Putdata method 1
    void putdata(int rollno,string name,string cls)
    {
        cout<<"Roll No:"<<rollno<<"\n";
        cout<<"Name:"<<name<<"\n";
        cout<<"Class:"<<cls<<"\n";
    }
    //Putdata method 2
    void putdata(int marks, string div)
    {
        cout<<"Marks:"<<marks<<"\n";
        cout<<"Div:"<<div<<"\n";
        
    }
};
int main()                                 
{
    Student s;
    Student s1(120, "Akshata", "SY");
    Student s2(100, "C");

    s1.putdata(s1.rollno,s1.name,s1.cls);
    s2.putdata(s2.marks,s2.div);

    return 0;
}