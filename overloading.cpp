#include <iostream>
using namespace std;

class A
{
        
    public:
    void display(int a)
    {
        cout<<"Integer Value="<<a;
    }
    
    void display(float b)
    {
       cout<<"Float Value="<<b<<"\n";
    }
};

int main()
{
    A a;
    a.display(10);
    a.display(10.20f);

    return 0;
}