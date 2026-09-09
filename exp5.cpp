#include <iostream>
using namespace std;

class Rectangle
{
 
    public :
    int length;
    int width;

    public:
    
    Rectangle(int len, int wid)
    {
        length=len;
        width=wid;
    }

    void area()
    {
        cout<<"\nArea of Rectangle=\n"<<(length*width)<<"\n";
    }

    void perimeter()
    {
        cout<<"\nPerimeter of Rectangle=\n"<<(2*(length+width))<<"\n";
    }

    ~Rectangle()
    {
        cout<<"Program terminated!";
    }
};

int main()
{
    Rectangle r(10,5);
    r.area();
    r.perimeter();
    return 0;
}