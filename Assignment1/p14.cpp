#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    
    cout<<"Table of :"<<n<<"\n";
    for(int i=1;i<=10;i++)
    {
        cout<<i*n<<"\n";
    }
    return 0;
}