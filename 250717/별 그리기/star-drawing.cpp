#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    for (int i = 1; i <= 2 * n - 1; i++) {
        int starCount = (i <= n) ? i : (2 * n - i);
        int spaceCount = n - starCount;

        
        for (int j = 0; j < spaceCount; j++) cout << ' ';
       
        for (int j = 0; j < 2 * starCount - 1; j++) cout << '*';
        cout << endl;
    }

    return 0;
}
