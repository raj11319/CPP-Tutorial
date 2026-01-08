#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the first angle: ";
    cin >> a;

    cout << "Enter the second angle: ";
    cin >> b;

    c = 180 - (a + b);

    cout << "The third angle is: " << c << endl;

    return 0;
}