#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <string>
using namespace std;

// Define an enum for grade categories
enum GradeCategory { Fail, Pass, Distinction };

// Define a struct for Student
struct Student {
    string name;
    int id;
    vector<double> grades;
};

// Validate that a grade is between 0 and 100
bool isValidGrade(double grade) {
    return grade >= 0 && grade <= 100;
}

// Categorize average grade
GradeCategory categorizeGrade(double average) {
    if (average < 50)
        return Fail;
    else if (average < 75)
        return Pass;
    else
        return Distinction;
}

// Convert enum to string
string categoryToString(GradeCategory category) {
    switch (category) {
        case Fail: return "Fail";
        case Pass: return "Pass";
        case Distinction: return "Distinction";
        default: return "Unknown";
    }
}

// Calculate average of grades
double calculateAverage(const vector<double>& grades) {
    if (grades.empty()) return 0.0;

    double sum = 0;
    for (double grade : grades) {
        sum += grade;
    }
    return sum / grades.size();
}

int main() {
    ifstream inputFile("students.csv");
    ofstream outputFile("summary.txt");

    if (!inputFile) {
        cout << "Error: Could not open students.csv" << endl;
        return 1;
    }

    if (!outputFile) {
        cout << "Error: Could not create summary.txt" << endl;
        return 1;
    }

    vector<Student> students;
    string line;

    // Read students.csv
    while (getline(inputFile, line)) {
        if (line.empty()) continue;

        stringstream ss(line);
        string item;
        Student student;

        // Read name
        getline(ss, student.name, ',');

        // Read id
        getline(ss, item, ',');
        student.id = stoi(item);

        // Read grades
        while (getline(ss, item, ',')) {
            double grade = stod(item);
            if (isValidGrade(grade)) {
                student.grades.push_back(grade);
            } else {
                cout << "Invalid grade " << grade
                     << " for student " << student.name << endl;
            }
        }

        students.push_back(student);
    }

    // Calculate averages, categorize, and output
    for (const Student& student : students) {
        double average = calculateAverage(student.grades);
        GradeCategory category = categorizeGrade(average);

        cout << "Name: " << student.name
             << ", ID: " << student.id
             << ", Average: " << average
             << ", Category: " << categoryToString(category) << endl;

        outputFile << "Name: " << student.name
                   << ", ID: " << student.id
                   << ", Average: " << average
                   << ", Category: " << categoryToString(category) << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Summary written to summary.txt" << endl;

    return 0;
}