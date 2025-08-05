#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0,m,num;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num==m){
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}