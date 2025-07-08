#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a=1,count=1;
    cin>>n;
    while(a*3*count<=n){
        cout<<a*3*count<<' ';
        count+=1;
    }
    return 0;
}