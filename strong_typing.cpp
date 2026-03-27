#include <iostream>
#include <string>
using namespace std;

int main() {
    // Convert int to float explicitly
    int num = 10;
    float decimal = (float) num;   // explicit cast

    cout << "Integer: " << num << endl;
    cout << "Converted to float: " << decimal << endl;

    // Attempt an invalid operation (this will cause an error)
    string text = "hello";
    // cout << num + text << endl;  // ❌ INVALID: int + string

    return 0;
}