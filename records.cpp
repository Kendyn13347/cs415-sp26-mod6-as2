#include <iostream>
#include <string>
using namespace std;

// Define a struct for Student
struct Student {
    string name;
    int id;
};

int main() {
    // Create a Student instance
    Student s1;
    s1.name = "John Doe";
    s1.id = 12345;

    // Print its fields
    cout << "Name: " << s1.name << endl;
    cout << "ID: " << s1.id << endl;

    return 0;
}