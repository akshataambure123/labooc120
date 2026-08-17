#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    
    cout<<"Enter a number no1:\n";
    cin>>n1;
    cout<<"Enter a number no2:\n";
    cin>>n2;
    cout<<"Enter a number no3:\n";
    cin>>n3;
    if(n1>n2&&n1>n3)
    {
        cout<<"no1 is Largest number\n";
    }
    else if(n2>n1&&n2>n3)
    {
        cout<<"no2 is Largest number\n";
    }
    else if(n3>n1&&n3>n2)
    {
        cout<<"no3 is Largest number\n";
    }
    return 0;
}