#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

// ============================================================
//                 STUDENT MANAGEMENT SYSTEM
// ============================================================

const int MAX_STUDENTS = 100;

// ============================================================
//                      STUDENT CLASS
// ============================================================

class Student
{
private:
    int id;
    string name;
    int age;
    string gender;
    string course;
    string division;
    float marks;
    string phone;
    string email;

public:

    // Default Constructor
    Student()
    {
        id = 0;
        name = "";
        age = 0;
        gender = "";
        course = "";
        division = "";
        marks = 0;
        phone = "";
        email = "";
    }

    // Function to accept student information
    void input()
    {
        cout << "\n---------------------------------------------\n";
        cout << "          ENTER STUDENT DETAILS\n";
        cout << "---------------------------------------------\n";

        cout << "Enter Student ID       : ";
        cin >> id;

        cin.ignore();

        cout << "Enter Student Name     : ";
        getline(cin, name);

        cout << "Enter Age              : ";
        cin >> age;

        cin.ignore();

        cout << "Enter Gender           : ";
        getline(cin, gender);

        cout << "Enter Course           : ";
        getline(cin, course);

        cout << "Enter Division         : ";
        getline(cin, division);

        cout << "Enter Marks            : ";
        cin >> marks;

        cin.ignore();

        cout << "Enter Phone Number     : ";
        getline(cin, phone);

        cout << "Enter Email            : ";
        getline(cin, email);
    }

    // Function to display student information
    void display()
    {
        cout << "\n---------------------------------------------\n";
        cout << "          STUDENT INFORMATION\n";
        cout << "---------------------------------------------\n";

        cout << "Student ID       : " << id << endl;
        cout << "Student Name     : " << name << endl;
        cout << "Age              : " << age << endl;
        cout << "Gender           : " << gender << endl;
        cout << "Course           : " << course << endl;
        cout << "Division         : " << division << endl;
        cout << "Marks            : " << marks << endl;
        cout << "Phone Number     : " << phone << endl;
        cout << "Email            : " << email << endl;
    }

    // Function to display student in table format
    void displayTable()
    {
        cout << left
             << setw(8) << id
             << setw(20) << name
             << setw(6) << age
             << setw(12) << gender
             << setw(18) << course
             << setw(10) << division
             << setw(8) << marks
             << endl;
    }

    // Function to get student ID
    int getID()
    {
        return id;
    }

    // Function to get student name
    string getName()
    {
        return name;
    }

    // Function to get student marks
    float getMarks()
    {
        return marks;
    }

    // Function to update student
    void update()
    {
        cin.ignore();

        cout << "\nEnter New Student Name : ";
        getline(cin, name);

        cout << "Enter New Age          : ";
        cin >> age;

        cin.ignore();

        cout << "Enter New Gender       : ";
        getline(cin, gender);

        cout << "Enter New Course       : ";
        getline(cin, course);

        cout << "Enter New Division     : ";
        getline(cin, division);

        cout << "Enter New Marks        : ";
        cin >> marks;

        cin.ignore();

        cout << "Enter New Phone        : ";
        getline(cin, phone);

        cout << "Enter New Email        : ";
        getline(cin, email);
    }

    // Function to write object to file
    void writeToFile(ofstream &file)
    {
        file << id << endl;
        file << name << endl;
        file << age << endl;
        file << gender << endl;
        file << course << endl;
        file << division << endl;
        file << marks << endl;
        file << phone << endl;
        file << email << endl;
    }

    // Function to read object from file
    bool readFromFile(ifstream &file)
    {
        string marksString;

        if (!getline(file, marksString))
            return false;

        if (marksString.empty())
            return false;

        id = atoi(marksString.c_str());

        getline(file, name);

        string ageString;
        getline(file, ageString);
        age = atoi(ageString.c_str());

        getline(file, gender);
        getline(file, course);
        getline(file, division);

        getline(file, marksString);
        marks = atof(marksString.c_str());

        getline(file, phone);
        getline(file, email);

        return true;
    }
};

// ============================================================
//                 GLOBAL VARIABLES
// ============================================================

Student students[MAX_STUDENTS];

int studentCount = 0;

// ============================================================
//                    FUNCTION DECLARATIONS
// ============================================================

void mainMenu();
void addStudent();
void displayAllStudents();
void searchStudent();
void searchByID();
void searchByName();
void updateStudent();
void deleteStudent();
void sortStudents();
void sortByName();
void sortByMarks();
void calculateAverage();
void findTopper();
void saveToFile();
void loadFromFile();
bool checkID(int id);

// ============================================================
//                    CHECK UNIQUE ID
// ============================================================

bool checkID(int id)
{
    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].getID() == id)
        {
            return false;
        }
    }

    return true;
}

// ============================================================
//                    ADD STUDENT
// ============================================================

void addStudent()
{
    if (studentCount >= MAX_STUDENTS)
    {
        cout << "\nStudent list is full!\n";
        return;
    }

    Student s;

    s.input();

    while (!checkID(s.getID()))
    {
        cout << "\nStudent ID already exists!";
        cout << "\nPlease enter another ID.\n";

        s.input();
    }

    students[studentCount] = s;
    studentCount++;

    cout << "\n=============================================\n";
    cout << "     STUDENT ADDED SUCCESSFULLY!\n";
    cout << "=============================================\n";
}

// ============================================================
//                DISPLAY ALL STUDENTS
// ============================================================

void displayAllStudents()
{
    if (studentCount == 0)
    {
        cout << "\nNo student records available.\n";
        return;
    }

    cout << "\n===============================================================\n";
    cout << "                    ALL STUDENTS\n";
    cout << "===============================================================\n";

    cout << left
         << setw(8) << "ID"
         << setw(20) << "NAME"
         << setw(6) << "AGE"
         << setw(12) << "GENDER"
         << setw(18) << "COURSE"
         << setw(10) << "DIV"
         << setw(8) << "MARKS"
         << endl;

    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < studentCount; i++)
    {
        students[i].displayTable();
    }
}

// ============================================================
//                    SEARCH STUDENT
// ============================================================

void searchStudent()
{
    int choice;

    cout << "\n=============================================\n";
    cout << "             SEARCH STUDENT\n";
    cout << "=============================================\n";

    cout << "1. Search by Student ID\n";
    cout << "2. Search by Student Name\n";
    cout << "3. Back\n";

    cout << "\nEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            searchByID();
            break;

        case 2:
            searchByName();
            break;

        case 3:
            return;

        default:
            cout << "\nInvalid choice!\n";
    }
}

// ============================================================
//                  SEARCH BY ID
// ============================================================

void searchByID()
{
    int id;

    cout << "\nEnter Student ID : ";
    cin >> id;

    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].getID() == id)
        {
            cout << "\nStudent Found!\n";
            students[i].display();
            return;
        }
    }

    cout << "\nStudent record not found.\n";
}

// ============================================================
//                  SEARCH BY NAME
// ============================================================

void searchByName()
{
    string name;

    cin.ignore();

    cout << "\nEnter Student Name : ";
    getline(cin, name);

    bool found = false;

    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].getName() == name)
        {
            cout << "\nStudent Found!\n";
            students[i].display();

            found = true;
        }
    }

    if (!found)
    {
        cout << "\nStudent record not found.\n";
    }
}

// ============================================================
//                  UPDATE STUDENT
// ============================================================

void updateStudent()
{
    int id;

    cout << "\nEnter Student ID to update : ";
    cin >> id;

    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].getID() == id)
        {
            cout << "\nStudent record found.\n";

            students[i].update();

            cout << "\n=============================================\n";
            cout << "       RECORD UPDATED SUCCESSFULLY!\n";
            cout << "=============================================\n";

            return;
        }
    }

    cout << "\nStudent record not found.\n";
}

// ============================================================
//                  DELETE STUDENT
// ============================================================

void deleteStudent()
{
    int id;

    cout << "\nEnter Student ID to delete : ";
    cin >> id;

    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].getID() == id)
        {
            char confirm;

            cout << "\nStudent found.";
            cout << "\nName : " << students[i].getName();

            cout << "\n\nAre you sure you want to delete? (Y/N) : ";
            cin >> confirm;

            if (confirm == 'Y' || confirm == 'y')
            {
                for (int j = i; j < studentCount - 1; j++)
                {
                    students[j] = students[j + 1];
                }

                studentCount--;

                cout << "\nStudent deleted successfully.\n";
            }
            else
            {
                cout << "\nDeletion cancelled.\n";
            }

            return;
        }
    }

    cout << "\nStudent record not found.\n";
}

// ============================================================
//                    SORT STUDENTS
// ============================================================

void sortStudents()
{
    int choice;

    cout << "\n=============================================\n";
    cout << "               SORT STUDENTS\n";
    cout << "=============================================\n";

    cout << "1. Sort by Name\n";
    cout << "2. Sort by Marks\n";
    cout << "3. Back\n";

    cout << "\nEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            sortByName();
            break;

        case 2:
            sortByMarks();
            break;

        case 3:
            return;

        default:
            cout << "\nInvalid choice!\n";
    }
}

// ============================================================
//                    SORT BY NAME
// ============================================================

void sortByName()
{
    for (int i = 0; i < studentCount - 1; i++)
    {
        for (int j = i + 1; j < studentCount; j++)
        {
            if (students[i].getName() > students[j].getName())
            {
                Student temp;

                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    cout << "\nStudents sorted by name successfully.\n";

    displayAllStudents();
}

// ============================================================
//                    SORT BY MARKS
// ============================================================

void sortByMarks()
{
    for (int i = 0; i < studentCount - 1; i++)
    {
        for (int j = i + 1; j < studentCount; j++)
        {
            if (students[i].getMarks() < students[j].getMarks())
            {
                Student temp;

                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    cout << "\nStudents sorted by marks successfully.\n";

    displayAllStudents();
}

// ============================================================
//                  CALCULATE AVERAGE
// ============================================================

void calculateAverage()
{
    if (studentCount == 0)
    {
        cout << "\nNo student records available.\n";
        return;
    }

    float total = 0;

    for (int i = 0; i < studentCount; i++)
    {
        total += students[i].getMarks();
    }

    float average = total / studentCount;

    cout << "\n=============================================\n";
    cout << "             STUDENT STATISTICS\n";
    cout << "=============================================\n";

    cout << "Total Students : " << studentCount << endl;
    cout << "Average Marks  : " << average << endl;
}

// ============================================================
//                    FIND TOPPER
// ============================================================

void findTopper()
{
    if (studentCount == 0)
    {
        cout << "\nNo student records available.\n";
        return;
    }

    int position = 0;

    for (int i = 1; i < studentCount; i++)
    {
        if (students[i].getMarks() > students[position].getMarks())
        {
            position = i;
        }
    }

    cout << "\n=============================================\n";
    cout << "                 TOPPER\n";
    cout << "=============================================\n";

    students[position].display();
}

// ============================================================
//                    SAVE TO FILE
// ============================================================

void saveToFile()
{
    ofstream file("students.txt");

    if (!file)
    {
        cout << "\nError opening file!\n";
        return;
    }

    file << studentCount << endl;

    for (int i = 0; i < studentCount; i++)
    {
        students[i].writeToFile(file);
    }

    file.close();

    cout << "\nStudent records saved successfully.\n";
}

// ============================================================
//                    LOAD FROM FILE
// ============================================================

void loadFromFile()
{
    ifstream file("students.txt");

    if (!file)
    {
        cout << "\nNo previous data found.\n";
        return;
    }

    string countString;

    getline(file, countString);

    if (countString.empty())
    {
        file.close();
        return;
    }

    studentCount = atoi(countString.c_str());

    if (studentCount > MAX_STUDENTS)
    {
        studentCount = MAX_STUDENTS;
    }

    int loaded = 0;

    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].readFromFile(file))
        {
            loaded++;
        }
        else
        {
            break;
        }
    }

    studentCount = loaded;

    file.close();

    cout << "\nStudent records loaded successfully.\n";
}

// ============================================================
//                      MAIN MENU
// ============================================================

void mainMenu()
{
    int choice;

    do
    {
        cout << "\n\n";
        cout << "============================================================\n";
        cout << "              STUDENT MANAGEMENT SYSTEM\n";
        cout << "============================================================\n";

        cout << "1.  Add Student\n";
        cout << "2.  Display All Students\n";
        cout << "3.  Search Student\n";
        cout << "4.  Update Student\n";
        cout << "5.  Delete Student\n";
        cout << "6.  Sort Students\n";
        cout << "7.  Calculate Average Marks\n";
        cout << "8.  Find Topper\n";
        cout << "9.  Save Records to File\n";
        cout << "10. Load Records from File\n";
        cout << "11. Exit\n";

        cout << "------------------------------------------------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayAllStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                sortStudents();
                break;

            case 7:
                calculateAverage();
                break;

            case 8:
                findTopper();
                break;

            case 9:
                saveToFile();
                break;

            case 10:
                loadFromFile();
                break;

            case 11:
                cout << "\nThank you for using Student Management System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 11);
}

// ============================================================
//                         MAIN
// ============================================================

int main()
{
    loadFromFile();

    mainMenu();

    saveToFile();

    return 0;
}