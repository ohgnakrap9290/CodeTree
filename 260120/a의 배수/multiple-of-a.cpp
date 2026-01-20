#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,a;
    cin>>N>>a;
    for(int i=1;i<=N;i++){
        if(i%a==0){
            cout<<1<<'\n';
$0
        }
        else{
            cout<<0<<'\n';
        }
    }
    return 0;
}