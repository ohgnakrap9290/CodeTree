#include <iostream>
using namespace std;

int main() {
    char grade;
    cin >> grade;

    if (grade == 'S') {
        cout << "Superior";
    } else if (grade == 'A') {
        cout << "Excellent";
    } else if (grade == 'B') {
        cout << "Good";
    } else if (grade == 'C') {
        cout << "Usually";
    } else if (grade == 'D') {
        cout << "Effort";
    } else {
        cout << "Failure";
    }

    return 0;
}
