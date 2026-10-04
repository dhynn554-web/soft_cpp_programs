#include <iostream>
using namespace std;

int main() {
    // SLABS ARE CHARGED CUMULATIVELY:
    // first 100 units @ Rs.5, next 100 @ Rs.7, every unit above 200 @ Rs.10.
    // (Not the whole amount at a single rate.)
    int units;
    cout << "Enter units consumed: ";
    cin >> units;
    if (units < 0) {
        cout << "Invalid units\n";
        return 0;
    }

    double bill;
    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;

    cout << "Total bill: Rs." << bill << "\n";
    return 0;
}
