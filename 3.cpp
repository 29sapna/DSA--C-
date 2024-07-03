#include <iostream>
using namespace std;

void result(int a, int b) {
    cout << "add: " << a + b << endl;
    cout << "sub: " << a - b << endl;
    cout << "mul: " << a * b << endl;
    
    // Check for division by zero to avoid runtime error
    if (b != 0) {
        cout << "div: " << a / b << endl;
        cout << "mod: " << a % b << endl;
    } else {
        cout << "div: Undefined (division by zero)" << endl;
        cout << "mod: Undefined (modulo by zero)" << endl;
    }
}

int main() {
    result(5, 6); // Call the result function with 5 and 6 as arguments
    return 0;
}
