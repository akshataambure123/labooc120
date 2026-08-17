#include <iostream>
using namespace std;
int main()
{
    int n1,n2,c;
    cout<<"Enter a length of rectagle:\n";
    cin>>n1;
    cout<<"Enter a width of rectangle:\n";
    cin>>n2;
    cout<<"1.area\n2.Perimeter\n";
    cout<<"Enter a your choise:\n";
    cin>>c;

    switch(c)
    {
        case 1:
        {
            cout<<"AREA="<<(n1*n2)<<"\n";
            break;
        }
        case 2:
        {
            cout<<"PERIMETER="<<(2*(n1+n2))<<"\n";
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