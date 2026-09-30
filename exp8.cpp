#include <iostream>
using namespace std;

class Distance
{
    public:
    int feet, inch;

    Distance(int f, int i)
    {
        feet=f;
        inch=i;
    }

    void operator-()
    {
        feet--;
        inch--;

        cout<<"\nInch-"<<inch;
        cout<<"\nFeet-"<<feet<<"\n";

    }
    void operator+()
    {
        feet=feet+3;
        inch=inch+3;

        cout<<"\nFeet-"<<feet<<"\n";
        cout<<"\nInch-"<<inch;
        
    }

int main()
{
    int a=10,b=20,c;
    c=a+b;
    cout<<c;
    Distance d(8,9);
    -d;
    Distance d1(10,20);
    +d1;
    cout<<d.feet<<"'"<<d.inch;
    return 0;
}
