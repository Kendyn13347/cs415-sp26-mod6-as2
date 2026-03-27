#include <iostream>
using namespace std;

int main() {
    // Create a fixed-size array
    int arr[5] = {10, 20, 30, 40, 50};

    // Print each element with its index
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << ": " << arr[i] << endl;
    }

    return 0;
}