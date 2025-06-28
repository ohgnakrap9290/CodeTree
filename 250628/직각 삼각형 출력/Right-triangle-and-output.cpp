#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    for(int i=1;i<2*n+1;i=i+2){
        //cout <<"*"*i<<' '*2*n-1-i;
        for(int j=0;j<i;j++){
            cout << '*';
        }
        for(int k=0;k<2*n-1-i;k++){
            cout<<' ';
        }
        cout<<'\n';
    }
}