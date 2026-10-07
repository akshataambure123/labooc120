#include <iostream>
using namespace std;

class Employee
{
    public:
    virtual void calculateBonus()=0;
};
class Manager:Employee
{
    int sal;
    Manager()
    {
        
    }
    void calculateBonus()
    {
        return 
    }
};
class Developre:Employee
{

}