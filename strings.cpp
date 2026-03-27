#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create a string
    string myString;

    cout << "Please enter a string: ";

    getline(cin,myString);
    // Print the string and its length
    
    cout << "String: " << myString << endl;
    cout << "Length: " << myString.length() << endl;

    return 0;
}