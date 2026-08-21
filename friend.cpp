#include <iostream>
using namespace std;

class A
{
    int number=10;
    friend void print(A);
};
void print(A a)
{
    cout<<a.number;
};
int main()
{
    A a;
    print(a);

    return 0;
}