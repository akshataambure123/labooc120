#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter 1st number:\n";
    cin>>n1;
     cout<<"Enter 2nd number:\n";
    cin>>n2;

    cout<<"Before swapping-\n";
    cout<<"1st number="<<n1<<"\n";
    cout<<"2nd number="<<n2<<"\n";
    n2=n2+n1;
    n1=n2-n1;
    n2=n2-n1;
    cout<<"After swapping-\n";
    cout<<"1st number="<<n1<<"\n";
    cout<<"2nd number="<<n2<<"\n";

    return 0;
}