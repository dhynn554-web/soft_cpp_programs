#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool prime = (n >= 2);
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { prime = false; break; }
    }
    cout << n << (prime ? " is prime\n" : " is not prime\n");
    return 0;
}
