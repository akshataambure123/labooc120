
/* File Handling with C++ using ifstream & ofstream class objects */
/* To write content to a file and then read the content */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Driver Code
int main()
{
    // Creation of ofstream class object
    ofstream fout;
    string line;

    // Open file in write mode
    // Existing content will be overwritten
    fout.open("sample.txt",ios::app);

    // Execute loop while file is successfully opened
    while (fout)
    {
        // Read a line from standard input
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        // Write line in file
        fout << line << endl;
    }

    // Close the file
    fout.close();

    // Creation of ifstream class object to read the file
    ifstream fin;

    // Open file in read mode (ios::in by default)
    fin.open("sample.txt");

    // Execute loop until EOF (End of File)  (take input from , store in)
    while (getline(fin, line))
    {
        // Print line read from file in console
        cout << line << endl;
    }

    // Close the file
    fin.close();

    return 0;
}