#include <iostream>
using namespace std;
int main()
{
    int n1;
    
    cout<<"Enter a number no1:\n";
    cin>>n1;
    if(n1==0)
    {
        cout<<"0 is not a negative and positive number\n";
    }
    else if(n1>0)
    {
        cout<<"number is Positive\n";
    }
    else
    {
        cout<<"number is Negative\n";
    }
    return 0;
}