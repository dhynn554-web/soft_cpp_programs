#include <iostream>
using namespace std;

// Stretch goal: reuse one small function instead of copy-pasting logic.
double largest(double a, double b) {
    return (a >= b) ? a : b;
}

int main() {
    double a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    cout << "Largest: " << largest(largest(a, b), largest(c, d)) << "\n";
    return 0;
}
