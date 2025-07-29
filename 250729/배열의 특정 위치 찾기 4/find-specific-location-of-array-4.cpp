#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,total=0,cnt=0;
    for(int i=0;i<10;i++){
        cin>>n;
        if(n==0){
            break;
        }
        if(n%2==0){
            cnt+=1;
            total+=n;
        }
    }
    cout<<cnt<<' '<<total;
    return 0;
    
}