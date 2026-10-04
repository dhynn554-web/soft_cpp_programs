#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a == b)     cout << "Both numbers are equal\n";
    else if (a > b) cout << "Larger: " << a << "\n";
    else            cout << "Larger: " << b << "\n";
    return 0;
}
