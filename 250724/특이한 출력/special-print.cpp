#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cout << "(" << i << ", " << j << ") ";
            
            // i + j가 4의 배수이면 줄 바꿈
            if ((i + j) % 4 == 0)
                cout << '\n';
        }
    }

    return 0;
}