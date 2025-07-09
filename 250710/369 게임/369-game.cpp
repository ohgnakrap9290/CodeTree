#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s = to_string(i); // 숫자를 문자열로 바꿔요!
        bool has369 = false;

        for (char ch : s) { // 한 글자씩 꺼내기!
            if (ch == '3' || ch == '6' || ch == '9') {
                has369 = true;
                break;
            }
        }

        if (i % 3 == 0 || has369)
            cout << 0 << " ";
        else
            cout << i << " ";
    }

    return 0;
}
