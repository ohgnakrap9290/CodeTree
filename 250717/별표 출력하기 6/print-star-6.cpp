#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<"  ";
        }
        for(int j=0;j<(n-i)*2-1;j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
        
    }
    for(int i=n-2;i>=0;i--){
        for(int k=0;k<i;k++){
            cout<<"  ";
        }
        for(int j=0;j<(n-i)*2-1;j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
        
    }
    return 0;
}