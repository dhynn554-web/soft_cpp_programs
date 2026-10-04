#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    // Bonus: reject invalid input
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Enter a value between 0 and 100.\n";
        return 0;
    }

    cout << (marks >= 40 ? "Pass" : "Fail") << "\n";

    // If-you-finish-early: also print the grade
    char grade;
    if (marks >= 90)      grade = 'A';
    else if (marks >= 80) grade = 'B';
    else if (marks >= 70) grade = 'C';
    else if (marks >= 60) grade = 'D';
    else if (marks >= 40) grade = 'E';
    else                  grade = 'F';
    cout << "Grade: " << grade << "\n";
    return 0;
}
