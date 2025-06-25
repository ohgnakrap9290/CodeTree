#include<iostream>
using namespace std;
int main(){
    int a,n,i;
    cin >>a>>n;
    for(i=0;i<n;i++){
        cout << (a+=n)<<'\n';
    }
}