#include <iostream>
using namespace std;

class A
{
    public:
    int num1=10;

    protected:
    int num2=20;

    private:
    int num3=30;
}
class B:public A
{

}
int main()
{
    return 0;
}