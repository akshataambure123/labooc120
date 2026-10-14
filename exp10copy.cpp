#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;

    fstream f1, f2;

    
    f1.open("a1.txt", ios::in);

   
    f2.open("a2.txt", ios::out);

    if (!f1 || !f2)
    {
        cout << "File not found";
        return 1;
    }

    
    while (getline(f1, line))
    {
        f2 << line << endl;
    }

    
    f1.close();
    f2.close();

    
    f2.open("a2.txt", ios::in);

    cout << "Copied content is:" << endl;

    
    while (getline(f2, line))
    {
        cout << line << endl;
    }

    f2.close();

    return 0;
}
