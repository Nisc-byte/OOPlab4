#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int roll_no;

public:
    void readStudent() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cin.ignore(); // Clear the input buffer
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

class Exam : public Student {
protected:
    float marks[5];

public:
    void readMarks() {
        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    float getTotalMarks() {
        float total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return total;
    }

    float getPercentage() {
        return getTotalMarks() / 5.0;
    }
};

class Result : public Exam {
public:
    void displayResult() {
        cout << "\n--- Result ---\n";
        displayStudent();
        displayMarks();
        float total = getTotalMarks();
        float percentage = getPercentage();
        cout << "Total Marks: " << total << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result studentResult;

    studentResult.readStudent();
    studentResult.readMarks();

    studentResult.displayResult();

    return 0;
}

