#include <iostream>
using namespace std;

class Student
{
    public:
        int rollno;
        string name, cls, div;

    public:
        void getdata()
        {
            cout<<" Enter name of student";
            cin>>name;
            cout<<"Enter roll no of student";
            cin>>rollno;
            cout<<" Enter class of student";
            cin>>cls;
            cout<<"Enter division of student";
            cin>>div;
        }
};
//class StudentExam
class StudentExam:public Student
{
    public:
        string s1,s2,s3,s4,s5,s6;
    public:
        void getdata1()
        {
            getdata();
            cout<<"Enter name of subject1:";
            cin>>s1;
            cout<<"Enter name of subject2:";
            cin>>s2;
            cout<<"Enter name of subject3:";
            cin>>s3;
            cout<<"Enter name of subject4:";
            cin>>s4;
             cout<<"Enter name of subject5:";
            cin>>s5;
            cout<<"Enter name of subject6:";
            cin>>s6;
        }
};
//class StudentResult
class StudentResult:public StudentExam
{
    public:
        int s1,s2,s3,s4,s5,s6;
    void result()
    {
        getdata1();

        cout<<"Enter marks of subject1:";
        cin>>s1;
        cout<<"Enter marks of subject2:";
        cin>>s2;
        cout<<"Enter marks of subject3:";
        cin>>s3;
        cout<<"Enter marks of subject4:";
        cin>>s4;
        cout<<"Enter marks of subject5:";
        cin>>s5;
        cout<<"Enter marks of subject6:";
        cin>>s6;
        
        cout<<"\nResult="<<((s1+s2+s3+s4+s5+s6)/6)<<"\n";
    }
};
int main()
{
    StudentResult sr;
    int n;
    cout<<"\nEnter no.of Student:";
    cin>>n;
   
    for(int i=0;i<=n;i++)
    {
          sr.result();
    }
    return 0;
}