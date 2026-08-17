#include <iostream>
using namespace std;
int main()
{
    int n1,n2,c;
    cout<<"Enter a 1st number:\n";
    cin>>n1;
    cout<<"Enter a 2nd number:\n";
    cin>>n2;
    cout<<"1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n";
    cout<<"Enter a your choise:\n";
    cin>>c;

    switch(c)
    {
        case 1:
        {
            cout<<(n1+n2)<<"\n";
            break;
        }
        case 2:
        {
            cout<<(n1-n2)<<"\n";
            break;
        }
        case 3:
        {
            cout<<(n1*n2)<<"\n";
            break;
        }
       case 4:
        {
            cout<<(n1/n2)<<"\n";
            break;
        }
        default:
        {
            cout<<"Please enter valid choise";
            break;
        }
    }
    return 0;
}