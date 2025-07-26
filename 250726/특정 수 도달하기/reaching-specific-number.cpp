#include <iostream>
using namespace std;

int main() {
    int n = 0, total = 0, count = 0;

    for(int i = 0; i < 10; i++) {
        cin >> n;
        if(n >= 250) {
            break; 
        }
        total += n;
        count++;
    }

    cout << fixed;
    cout.precision(1);
    cout << total << ' '<<(double)total / count;
    

    return 0;
}
