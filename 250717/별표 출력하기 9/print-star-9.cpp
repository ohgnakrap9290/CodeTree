#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<"  ";
        }
        for(int j=i*2;j>1;j--){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
    return 0;
}