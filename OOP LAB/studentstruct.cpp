#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
    int id;
    string name;
    double marks;

public:
    Student()
    {
        id = 0;
        name = "Unknown";
        marks = 0.0;
    }

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
    Student s1; 
    Student s2(101, "Karim", 85.5); 
    Student s3(102); 

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