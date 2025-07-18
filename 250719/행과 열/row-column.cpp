#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=i;j<=i*b;j=(j+i)){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    return 0;
}