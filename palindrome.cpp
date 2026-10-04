#include <iostream>
using namespace std;

int main() {
    long long n, original, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (rev == original) cout << original << " is a palindrome\n";
    else                 cout << original << " is not a palindrome\n";
    return 0;
}
