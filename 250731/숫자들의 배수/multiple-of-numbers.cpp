#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0,cnt1=1;
    cin>>n;
    while(cnt<2){
        cout<<n*cnt1<<' ';
        
        if((n*cnt1)%5==0){
            cnt+=1;
        }
        cnt1+=1;
    }
    return 0;
}