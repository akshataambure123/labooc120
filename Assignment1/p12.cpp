#include <iostream>
using namespace std;
int main()
{
    int n1;
    
    cout<<"Enter a year:\n";
    cin>>n1;
    if(n1/4==0)
    {
        cout<<"This year is leap year\n";
    }
    else
    {
        cout<<"This year is not a leap year\n";
    }
    return 0;
}