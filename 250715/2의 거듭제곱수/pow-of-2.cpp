#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin>>n;
    while(n%2==0){
        n/=2;
        cnt+=1;
    }
    cout<<cnt;
    return 0;
}