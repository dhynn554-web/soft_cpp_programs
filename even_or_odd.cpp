#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    // n % 2 is -1 for negative odd numbers, so test != 0 (handles negatives)
    if (n % 2 == 0) cout << n << " is even\n";
    else            cout << n << " is odd\n";
    return 0;
}
