#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list of integers
    list<int> numbers = {10, 20, 30};

    // Add an element
    numbers.push_back(40);

    // Print all elements
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}