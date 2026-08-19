#include <iostream>
using namespace std;

class Time
{
    int h,m,s;

    void input()
    {
        cout<<"Enter hours";
        cin>>h;
        cout<<"Enter minute";
        cin>>m;
        cout<<"Enter second";
        cin>>s; 
    }
    void output()
    {
        cout<<"Hours:"<<h;
        cout<<"Minutes:"<<m;
        cout<<"Seconds:"<<s;
    }
}