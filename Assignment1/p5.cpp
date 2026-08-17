#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter a radius:\n";
    cin>>r;
    cout<<"1.area\n2.Perimeter\n";
    cout<<"Enter a your choise:\n";
    cin>>c;

    switch(c)
    {
        case 1:
        {
            cout<<"CIRCUMTANCE="<<(2*3.14*r)<<"\n";
            break;
        }
        case 2:
        {
            cout<<"AREA="<<(3.14*r*r)<<"\n";
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