#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) sum += i;
    cout << "Sum of 1 to " << n << " = " << sum << "\n";
    return 0;
}
