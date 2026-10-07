#include<iostream>
using namespace std;

class Vehicle
{
    public:
        virtual void start()=0;
    private:
        virtual void stop()=0;
};
class Bike:Vehicle
{
    public:
        void start()
        {
            cout<<"Bike start";
        }
  
        void stop()
        {
            cout<<"\nBike stop";
        }
};
class Car:Vehicle
{
    public:
        void start()
        {
            cout<<"\nCar start";
        }
         void stop()
        {
            cout<<"\nCar stop";
        }
};

int main()
{
    Bike b;
    b.start();
    b.stop();
    Car c;
    c.start();
    c.stop();

    return 0;
}

