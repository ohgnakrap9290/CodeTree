#include <iostream>
using namespace std;

int main() {
    int a, b;
    char a1, b1;
    cin >> a >> a1 >> b >> b1;

    if ((a >= 19) && (a1 == 'M')) {
        cout << 1;
    }
    else if ((b >= 19) && (b1 == 'M')) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}
