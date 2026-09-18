#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
    int id;
    string name;
    double marks;

public:
    // Default constructor
    Student()
    {
        id = 0;
        name = "Unknown";
        marks = 0.0;
    }

    // Parameterized constructor
    Student(int i, string n, double m)
    {
        id = i;
        name = n;
        marks = m;
    }

    Student(int r)
    {
        id = r;
        name = "Unknown";
        marks = 0.0;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Creating objects using different constructors
    Student s1; // Default constructor
    Student s2(101, "Karim", 85.5); // Parameterized constructor
    Student s3(102); // Parameterized constructor with only ID

    cout << "Student 1 details:" << endl;
    s1.display();
    cout << endl;

    cout << "Student 2 details:" << endl;
    s2.display();
    cout << endl;

    cout << "Student 3 details:" << endl;
    s3.display();
    cout << endl;

    return 0;
}