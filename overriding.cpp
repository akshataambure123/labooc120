#include <iostream>
using namespace std;

class A
{
    public :

    void display(int a)
    {
        cout<<a<<"\n";
    }
};
class B:public A
{
    public:
    void display(int a)
    {
        cout<<a<<"\n";
    }
};

int main()
{
    A a;
    B b;
    a.display(10);
    b.display(50);
    return 0;
}