#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0,n;
    cin>>n;
    while(n<1000){
        if(n/2==0){
            n=n*3+1;
            cnt+=1;
        }
        else{
            n=n*2+2;
            cnt+=1;
        }
    }
    cout<<cnt-1;
    return 0;
}