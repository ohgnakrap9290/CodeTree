#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,total=1,cnt=1;
    cin >>n;
    while(total<n){
        total*=cnt;
        cnt+=1;
    }
    cout << cnt-1;

    return 0;
}