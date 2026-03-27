#include <iostream>
using namespace std;

int main() {
    // Create an integer
    int num = 50;

    // Create a pointer and a reference
    int* ptr = &num;   // pointer stores address of num
    int& ref = num;    // reference is another name for num

    // Print values
    cout << "Original value: " << num << endl;
    cout << "Value via pointer: " << *ptr << endl;
    cout << "Value via reference: " << ref << endl;

    return 0;
}