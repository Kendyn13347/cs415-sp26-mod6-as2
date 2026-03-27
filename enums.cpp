#include <iostream>
using namespace std;

// Define enum for days
enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    // Create a variable
    Day today = Wednesday;

    // Print its value
    cout << "Day value: " << today << endl;

    return 0;
}