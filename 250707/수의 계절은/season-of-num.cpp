#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    if (M >= 3 && M <= 5) {
        cout << "Spring";
    }
    else if (M >= 6 && M <= 8) {
        cout << "Summer";
    }
    else if (M >= 9 && M <= 11) {
        cout << "Autumn";
    }
    else if (M == 12 || M == 1 || M == 2) {
        cout << "Winter";
    }

    return 0;
}
