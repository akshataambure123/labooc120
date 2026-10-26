
/*
    Akshata Dinesh Ambure
    Computer Science Engineering
    SY-C | Roll No: 120
    Basic C++ Learning Platform
*/

#include <iostream>
#include <string>
using namespace std;

// Function to get choice
int getChoice()
{
    int choice;
    cin >> choice;
    return choice;
}

// Introduction
void introduction()
{
    cout << "\n===== INTRODUCTION TO C++ =====\n";
    cout << "C++ is a general-purpose programming language.\n";
    cout << "Developed by Bjarne Stroustrup.\n";

    cout << "\nFeatures:\n";
    cout << "1. Classes and Objects\n";
    cout << "2. Inheritance\n";
    cout << "3. Polymorphism\n";
    cout << "4. Encapsulation\n";
    cout << "5. Abstraction\n";
    cout << "6. Exception Handling\n";

    cout << "\nApplications:\n";
    cout << "1. Games\n";
    cout << "2. Operating Systems\n";
    cout << "3. Desktop Applications\n";
    cout << "4. Embedded Systems\n";
}

// Class and Object
class Student
{
public:
    int rollno;
    string name;

    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollno;

        cout << "Enter name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

void classObject()
{
    Student s;
    s.input();
    s.display();
}

// Constructor
class Demo
{
public:
    Demo()
    {
        cout << "Default constructor called.\n";
    }

    Demo(int n)
    {
        cout << "Parameterized constructor called.\n";
        cout << "Value = " << n << endl;
    }
};

void constructorDemo()
{
    Demo a;
    Demo b(100);
}

// Encapsulation
class BankAccount
{
private:
    int balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Deposit successful.\n";
        }
        else
        {
            cout << "Invalid amount.\n";
        }
    }

    void displayBalance()
    {
        cout << "Balance = " << balance << endl;
    }
};

void encapsulationDemo()
{
    BankAccount account;
    int amount;

    cout << "Enter deposit amount: ";
    cin >> amount;

    account.deposit(amount);
    account.displayBalance();
}

// Abstraction
class Calculator
{
public:
    void add()
    {
        int a, b;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "Sum = " << a + b << endl;
    }
};

void abstractionDemo()
{
    Calculator c;
    c.add();
}

// Inheritance
class Person
{
public:
    string name;

    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

class CollegeStudent : public Person
{
public:
    int rollno;

    void display()
    {
        showName();
        cout << "Roll Number: " << rollno << endl;
    }
};

void inheritanceDemo()
{
    CollegeStudent s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter roll number: ";
    cin >> s.rollno;

    s.display();
}

// Function Overloading
class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

void functionOverloadingDemo()
{
    Addition a;

    cout << "Integer sum: " << a.add(10, 20) << endl;
    cout << "Decimal sum: " << a.add(2.5, 3.5) << endl;
}

// Operator Overloading
class Number
{
public:
    int value;

    Number(int n)
    {
        value = n;
    }

    Number operator+(Number n)
    {
        return Number(value + n.value);
    }
};

void operatorOverloadingDemo()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number n1(a), n2(b);
    Number n3 = n1 + n2;

    cout << "Sum = " << n3.value << endl;
}

// Polymorphism
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape.\n";
    }

    virtual ~Shape() {}
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle.\n";
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a rectangle.\n";
    }
};

void polymorphismDemo()
{
    Circle c;
    Rectangle r;
    Shape *s;

    s = &c;
    s->draw();

    s = &r;
    s->draw();
}

// Templates
template <class T>
T maximum(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

void templateDemo()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = " << maximum(a, b) << endl;
}

// Dynamic Memory Allocation
void dynamicMemoryDemo()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0 || n > 1000)
    {
        cout << "Invalid size.\n";
        return;
    }

    int *arr = new int[n];

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array elements: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    delete[] arr;
}

// Exception Handling
void exceptionDemo()
{
    int a, b;

    cout << "Enter numerator and denominator: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw b;

        cout << "Result = " << (float)a / b << endl;
    }
    catch (int x)
    {
        cout << "Division by zero is not allowed.\n";
    }
}

// Sorting Array
void stlDemo()
{
    int arr[5] = {40, 10, 30, 20, 50};
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl;
}

// COMPLETE CODE DISPLAY
void displayConceptCode(int choice)
{
    switch (choice)
    {
        case 1:
            cout << R"(
===== CLASS AND OBJECT =====

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollno;
    string name;

    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollno;

        cout << "Enter name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}

// Input:
// 120
// Akshata

// Output:
// Enter roll number: 120
// Enter name: Akshata
// Roll Number: 120
// Name: Akshata
)";
            break;

        case 2:
            cout << R"(
===== CONSTRUCTOR =====

#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Default constructor called." << endl;
    }

    Demo(int n)
    {
        cout << "Value = " << n << endl;
    }
};

int main()
{
    Demo a;
    Demo b(100);
    return 0;
}

// Output:
// Default constructor called.
// Value = 100
)";
            break;

        case 3:
            cout << R"(
===== ENCAPSULATION =====

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Deposit successful." << endl;
        }
        else
        {
            cout << "Invalid amount." << endl;
        }
    }

    void display()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    int amount;

    cout << "Enter deposit amount: ";
    cin >> amount;

    b.deposit(amount);
    b.display();

    return 0;
}

// Input:
// 500

// Output:
// Enter deposit amount: 500
// Deposit successful.
// Balance = 500
)";
            break;

        case 4:
            cout << R"(
===== ABSTRACTION =====

#include <iostream>
using namespace std;

class Calculator
{
private:
    int add(int a, int b)
    {
        return a + b;
    }

public:
    void result()
    {
        int a, b;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "Sum = " << add(a, b) << endl;
    }
};

int main()
{
    Calculator c;
    c.result();
    return 0;
}

// Input:
// 10 20

// Output:
// Enter two numbers: 10 20
// Sum = 30
)";
            break;

        case 5:
            cout << R"(
===== INHERITANCE =====

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;

    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    int rollno;

    void display()
    {
        showName();
        cout << "Roll Number: " << rollno << endl;
    }
};

int main()
{
    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter roll number: ";
    cin >> s.rollno;

    s.display();
    return 0;
}

// Input:
// Akshata
// 120

// Output:
// Enter name: Akshata
// Enter roll number: 120
// Name: Akshata
// Roll Number: 120
)";
            break;

        case 6:
            cout << R"(
===== FUNCTION OVERLOADING =====

#include <iostream>
using namespace std;

class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Addition a;
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Integer sum = " << a.add(x, y) << endl;
    cout << "Decimal sum = " << a.add(2.5, 3.5) << endl;

    return 0;
}

// Input:
// 10 20

// Output:
// Enter two integers: 10 20
// Integer sum = 30
// Decimal sum = 6
)";
            break;

        case 7:
            cout << R"(
===== OPERATOR OVERLOADING =====

#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number(int n)
    {
        value = n;
    }

    Number operator+(Number n)
    {
        return Number(value + n.value);
    }
};

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number n1(a), n2(b);
    Number n3 = n1 + n2;

    cout << "Sum = " << n3.value << endl;
    return 0;
}

// Input:
// 10 20

// Output:
// Enter two numbers: 10 20
// Sum = 30
)";
            break;

        case 8:
            cout << R"(
===== POLYMORPHISM =====

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape." << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a rectangle." << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Shape *s;

    s = &c;
    s->draw();

    s = &r;
    s->draw();

    return 0;
}

// Output:
// Drawing a circle.
// Drawing a rectangle.
)";
            break;

        case 9:
            cout << R"(
===== TEMPLATES =====

#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = " << maximum(a, b) << endl;
    return 0;
}

// Input:
// 10 20

// Output:
// Enter two numbers: 10 20
// Maximum = 20
)";
            break;

        case 10:
            cout << R"(
===== DYNAMIC MEMORY ALLOCATION =====

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int *p = new int;
    *p = n;

    cout << "Value = " << *p << endl;

    delete p;
    return 0;
}

// Input:
// 100

// Output:
// Enter a number: 100
// Value = 100
)";
            break;

        case 11:
            cout << R"(
===== EXCEPTION HANDLING =====

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter numerator and denominator: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw b;

        cout << "Result = " << (float)a / b << endl;
    }
    catch (int x)
    {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}

// Input:
// 10 0

// Output:
// Enter numerator and denominator: 10 0
// Division by zero is not allowed.
)";
            break;

        case 12:
            cout << R"(
===== ARRAY SORTING =====

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {40, 10, 30, 20, 50};
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}

// Output:
// Sorted array: 10 20 30 40 50
)";
            break;

        default:
            cout << "Invalid concept number.\n";
    }
}

// OOP MENU
void oopMenu()
{
    int choice;

    do
    {
        cout << "\n========== OOP MENU ==========\n";
        cout << "1. Class and Object\n";
        cout << "2. Constructor\n";
        cout << "3. Encapsulation\n";
        cout << "4. Abstraction\n";
        cout << "5. Inheritance\n";
        cout << "6. Function Overloading\n";
        cout << "7. Operator Overloading\n";
        cout << "8. Polymorphism\n";
        cout << "9. Display Complete Code with Input/Output\n";
        cout << "0. Back\n";
        cout << "Enter choice: ";

        choice = getChoice();

        switch (choice)
        {
            case 1: classObject(); break;
            case 2: constructorDemo(); break;
            case 3: encapsulationDemo(); break;
            case 4: abstractionDemo(); break;
            case 5: inheritanceDemo(); break;
            case 6: functionOverloadingDemo(); break;
            case 7: operatorOverloadingDemo(); break;
            case 8: polymorphismDemo(); break;

            case 9:
            {
                int n;

                cout << "\n1. Class and Object\n";
                cout << "2. Constructor\n";
                cout << "3. Encapsulation\n";
                cout << "4. Abstraction\n";
                cout << "5. Inheritance\n";
                cout << "6. Function Overloading\n";
                cout << "7. Operator Overloading\n";
                cout << "8. Polymorphism\n";
                cout << "Enter concept number: ";

                n = getChoice();
                displayConceptCode(n);
                break;
            }

            case 0:
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 0);
}

// ADVANCED MENU
void advancedMenu()
{
    int choice;

    do
    {
        cout << "\n======= ADVANCED CONCEPTS =======\n";
        cout << "1. Templates\n";
        cout << "2. Dynamic Memory Allocation\n";
        cout << "3. Exception Handling\n";
        cout << "4. Array Sorting\n";
        cout << "5. Display Complete Code with Input/Output\n";
        cout << "0. Back\n";
        cout << "Enter choice: ";

        choice = getChoice();

        switch (choice)
        {
            case 1: templateDemo(); break;
            case 2: dynamicMemoryDemo(); break;
            case 3: exceptionDemo(); break;
            case 4: stlDemo(); break;

            case 5:
            {
                int n;

                cout << "\n9. Templates\n";
                cout << "10. Dynamic Memory Allocation\n";
                cout << "11. Exception Handling\n";
                cout << "12. Array Sorting\n";
                cout << "Enter concept number: ";

                n = getChoice();
                displayConceptCode(n);
                break;
            }

            case 0:
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 0);
}

// MAIN FUNCTION
int main()
{
    int choice;

    cout << "\n====================================\n";
    cout << "      BASIC C++ LEARNING PLATFORM\n";
    cout << "====================================\n";
    cout << "Created by: Akshata Dinesh Ambure\n";
    cout << "Department: Computer Science Engineering\n";
    cout << "Class: SY-C\n";
    cout << "Roll Number: 120\n";
    cout << "====================================\n";

    do
    {
        cout << "\n========== MAIN MENU ==========\n";
        cout << "1. Introduction and Theory\n";
        cout << "2. OOP Concepts\n";
        cout << "3. Advanced C++ Concepts\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";

        choice = getChoice();

        switch (choice)
        {
            case 1:
                introduction();
                break;

            case 2:
                oopMenu();
                break;

            case 3:
                advancedMenu();
                break;

            case 0:
                cout << "Thank you for learning C++!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
