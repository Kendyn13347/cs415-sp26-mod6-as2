#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
    // Create a tuple (name, age, GPA)
    tuple<string, int, double> student = make_tuple("John Doe", 20, 3.75);

    // Print each component
    cout << "Name: " << get<0>(student) << endl;
    cout << "Age: " << get<1>(student) << endl;
    cout << "GPA: " << get<2>(student) << endl;

    return 0;
}