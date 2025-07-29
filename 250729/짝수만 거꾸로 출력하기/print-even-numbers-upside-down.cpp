#include <iostream>
using namespace std;

int main() {
    int n, num,array[100],cnt=0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            array[cnt++] = num;
        }
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    return 0;
}
