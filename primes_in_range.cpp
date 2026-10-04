#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int lo, hi;
    cout << "Enter range (low high): ";
    cin >> lo >> hi;
    cout << "Primes between " << lo << " and " << hi << ": ";
    for (int i = lo; i <= hi; i++)
        if (isPrime(i)) cout << i << " ";
    cout << "\n";
    return 0;
}
