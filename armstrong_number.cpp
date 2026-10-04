#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Count digits
    int digits = 0, temp = n;
    while (temp > 0) { digits++; temp /= 10; }
    if (n == 0) digits = 1;

    // Sum of each digit raised to the power of 'digits'
    long long sum = 0;
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        long long p = 1;
        for (int i = 0; i < digits; i++) p *= d;
        sum += p;
        temp /= 10;
    }

    if (sum == n) cout << n << " is an Armstrong number\n";
    else          cout << n << " is not an Armstrong number\n";
    return 0;
}
