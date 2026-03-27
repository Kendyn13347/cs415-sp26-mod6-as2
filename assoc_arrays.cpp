#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map with student names and scores
    map<string, int> students;

    students["Alice"] = 90;
    students["Bob"] = 85;
    students["Charlie"] = 92;

    // Print each key-value pair
    for (const auto& pair : students) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}