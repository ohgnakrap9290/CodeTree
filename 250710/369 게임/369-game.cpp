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
// #include <iostream>

// using namespace std;

// int main() {
//     // 변수 선언
//     int n;

// 	// 입력
// 	cin >> n;
    
//     // 출력
// 	for(int i = 1; i <= n; i++) {
// 		if(i % 3 == 0)
// 			cout << "0 ";
// 		else if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
// 			cout << "0 ";
// 		else if(i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
// 			cout << "0 ";
// 		else
// 			cout << i << " ";
// 	}

//     return 0;
// }
