
#include <iostream>
using namespace std;

// Function declarations
void readMarks(int marks[], int n);
int findTotal(int marks[], int n);
double findAverage(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);
int countPassed(int marks[], int n);
void printReport(int marks[], int n);

int main() {
    char choice;

    do {
        int n = 0;

        // Validate number of students
        while (true) {
            cout << "Enter the number of students (1 - 100): ";
            cin >> n;

            if (n >= 1 && n <= 100) {
                break;
            }

            cout << "Invalid count! Please enter a number between 1 and 100.\n";
        }

        // Dynamic memory allocation
        int* marks = new int[n];

        // Read marks and generate report
        readMarks(marks, n);
        printReport(marks, n);

        // Free allocated memory
        delete[] marks;

        // Ask whether to repeat
        cout << "\nWould you like to run the analysis again? (y/n): ";
        cin >> choice;

        cout << "\n----------------------------------------\n";

    } while (choice == 'y' || choice == 'Y');

    cout << "Exiting program. Goodbye!\n";

    return 0;
}

// 1. Read and validate student marks
void readMarks(int marks[], int n) {
    cout << "\nEnter marks for " << n << " students (out of 100):\n";

    for (int i = 0; i < n; i++) {
        while (true) {
            cout << "Student " << (i + 1) << " mark: ";
            cin >> marks[i];

            if (marks[i] >= 0 && marks[i] <= 100) {
                break;
            }

            cout << "Invalid mark! Please enter a value between 0 and 100.\n";
        }
    }
}

// 2. Calculate total marks
int findTotal(int marks[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += marks[i];
    }

    return total;
}

// 3. Calculate average marks
double findAverage(int marks[], int n) {
    if (n == 0)
        return 0.0;

    return static_cast<double>(findTotal(marks, n)) / n;
}

// 4. Find highest mark
int findHighest(int marks[], int n) {
    int highest = marks[0];

    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    return highest;
}

// 5. Find lowest mark
int findLowest(int marks[], int n) {
    int lowest = marks[0];

    for (int i = 1; i < n; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    return lowest;
}

// 6. Count passed students
int countPassed(int marks[], int n) {
    int passedCount = 0;

    for (int i = 0; i < n; i++) {
        if (marks[i] >= 40) {
            passedCount++;
        }
    }

    return passedCount;
}

// 7. Print complete analytical report
void printReport(int marks[], int n) {
    int total = findTotal(marks, n);
    double average = findAverage(marks, n);
    int highest = findHighest(marks, n);
    int lowest = findLowest(marks, n);
    int passed = countPassed(marks, n);
    int failed = n - passed;

    cout << "\n===== STUDENT MARKS ANALYSIS REPORT =====\n";

    cout << "Total Students : " << n << "\n";
    cout << "Total Marks    : " << total << "\n";
    cout << "Average Mark   : " << average << "\n";
    cout << "Highest Mark   : " << highest << "\n";
    cout << "Lowest Mark    : " << lowest << "\n";
    cout << "Passed         : " << passed << "\n";
    cout << "Failed         : " << failed << "\n";

    cout << "=========================================\n";
}
