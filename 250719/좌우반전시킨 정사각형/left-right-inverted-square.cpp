#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=n;i<=n*n;i+=n){
        for(int j=i;j>=(i/n);j-=(i/n)){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    return 0;
}