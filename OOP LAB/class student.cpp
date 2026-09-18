#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    int marks[5];
public:
    Student(int r, string n) {
        rollNumber = r;
        name = n;
        for(int i = 0; i < 5; i++) {
            marks[i] = 0;
        }
    }

    void setMarks(int index, int mark) {
        if (index >= 0 && index < 5) {
            marks[index] = mark;
        } else {
            cout << "Invalid index for marks." << endl;
        }
    }
    double getAverageMarks() {
        double sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5;
    }

    void displayStudentInfo() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Student student1(1, "Nusrat Jahan");
    student1.setMarks(0, 85);
    student1.setMarks(1, 90);
    student1.setMarks(2, 78);
    student1.setMarks(3, 92);
    student1.setMarks(4, 88);

    student1.displayStudentInfo();
    cout << "Average Marks: " << student1.getAverageMarks() << endl;

    return 0;
}
