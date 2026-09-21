/*Akshata Dinesh Ambure
Computer Science Engineering
SY-C
*/
#include<iostream>
using namespace std;

int main()
{
    int choice;
    //----------------------------Theory-----------------------------------
    /*cout<<"\t\t\t\t****C++****\n";
    cout<<"\n   Introduction to C++ Programming Language";
    cout<<"\n 1.1 What is C++? C++ is a general-purpose, high-level programming language used to develop software applications, operating systems, games, and many other types of computer programs.It is an extension of the C programming language that introduces additional features, especially Object-Oriented Programming (OOP). C++ supports both procedural programming and object-oriented programming, making it a flexible and powerful programming language. It allows programmers to write programs using functions, classes, objects, and other programming concepts.";
    cout<<"\nDefinition"<<"C++ is a general-purpose, object-oriented programming language developed as an extension of the C language. It supports procedural, object-oriented, and generic programming.";

    cout<<"1.2 History of C++"<<"\n"<<"C++ was developed by Bjarne Stroustrup at Bell Laboratories.In 1979, Bjarne Stroustrup started developing a language called C with Classes. It was designed to combine the efficiency of C with the features of object-oriented programming.In 1983, the language was renamed C++. The name C++ comes from the increment operator ++ in C, indicating an improvement over C.C++ became an internationally standardized programming language in 1998 with the C++98 standard. Modern versions of C++ provide additional features that make programming safer, more efficient, and easier to maintain.";
    cout<<"1.3 Why is C++ Important?"<<"\n"<<"C++ is important because it provides:"<<"\n"<<"High performance: It can execute programs efficiently and is suitable for performance-critical applications.Object-oriented programming: It allows programmers to organize programs using classes and objects.Code reusability: Features such as inheritance allow programmers to reuse existing code. Data security: Encapsulation and access specifiers help control access to data.Portability: C++ programs can be compiled for different platforms, although platform-specific code may require modifications.Memory management: It provides facilities for managing memory directly and indirectly.Flexibility: It supports procedural, object-oriented, and generic programming.";*/
    //-------------------------end of theory------------------------------

/*1.4 Features of C++
1. Object-Oriented Programming

C++ supports object-oriented programming, which organizes programs around classes and objects.

Its major OOP concepts include:

Class
Object
Encapsulation
Abstraction
Inheritance
Polymorphism
2. Platform Independence Through Portability

C++ source code can often be compiled on different operating systems with suitable compilers.

However, platform-specific features and libraries may require modifications.

3. High Performance

C++ allows programmers to write efficient programs with fine-grained control over resources.

It is widely used in applications where execution speed matters.

4. Rich Standard Library

C++ provides a standard library containing useful facilities such as:

Input and output operations
Strings
Containers
Algorithms
Mathematical operations
File handling

For example, iostream provides standard input and output functionality.

5. Function Overloading

C++ allows multiple functions to have the same name if their parameter lists are different.

This is an example of compile-time polymorphism.

6. Operator Overloading

C++ allows programmers to define how certain operators behave when applied to user-defined types.

For example, the + operator can be overloaded to add two objects of a class.

7. Inheritance

Inheritance allows one class to acquire and extend the properties and behaviors of another class.

It supports code reuse and hierarchical class design.

8. Dynamic Memory Allocation

C++ provides mechanisms such as new and delete for dynamic memory allocation and deallocation.

Modern C++ also provides smart pointers to help manage dynamically allocated resources safely.

9. Exception Handling

C++ supports exception handling using:

try
throw
catch

These facilities help programmers handle exceptional situations.*/

    cout<<"10. Generic Programming"<<"\n"<<"C++ supports templates, which allow programmers to write reusable functions and classes that work with different data types.";
  
//--------------------------------------------real code----------------------------------
    class Student
    {
        public:
        int rollno;
        string name;

        void display()
        {
            cout << "\n--- Student Details ---" << endl;
            cout << "Roll Number: " << rollno << endl;
            cout << "Name: " << name << endl;
        }
    };

//------------------------------------------Switch--------------------------------------------
    cout << "===== C++ OOP CONCEPTS =====" << endl;
    cout << "1. Class and Object\n2.Costructor" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            Student s1;
            cout<<"\n Syntax of class-"<<"\n class ClassName"<<"\n"<<"{"<<"\n\t"<<"access_specifier:"<<"\n\t"<<"// Data members (variables)"<<"\n\t"<<"// Member functions (functions)"<<"\n"<<"};"<<"\n";
            cout<<"\nSyntax of Object creation-\n"<<"ClassName object;"<<"\n";
        //----------------------------------------code to display--------------
        cout << R"(
        let's see code of class
         -------Program of class------
            //header files
            #include <iostream>
            using namespace std;
          
             class Student   //class 
             { 
                public: 
                int rollno; 
                string name; 
                    
                void display() 
                { 
                    cout << "\n--- Student Details ---" << endl; 
                    cout << "Roll Number: " << rollno << endl; 
                     cout << "Name: " << name << endl; 
                 } 
             };

            int main()
             {
                Student s;//object creation
                cout << "\nEnter Roll Number: ";
                cin >> s1.rollno;
                cout << "Enter Name: ";
                cin >> s1.name;

                return 0;
             }
                )";
            //----------------end of program------------------------

            cout<<"\nOutput\n";

            cout << "\nEnter Roll Number: ";
            cin >> s1.rollno;
            cout << "Enter Name: ";
            cin >> s1.name;

            s1.display();

            break;
         }

        default:
            cout << "Invalid Choice!";
    }

//---------------------------------------------------------------------------------------------
    return 0;
}