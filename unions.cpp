#include <iostream>
using namespace std;

// Define a union
union Data {
    int i;
    float f;
};

int main() {
    Data d;

    // Assign integer value
    d.i = 10;
    cout << "Integer: " << d.i << endl;

    // Assign float value
    d.f = 3.14;
    cout << "Float: " << d.f << endl;

    return 0;
}