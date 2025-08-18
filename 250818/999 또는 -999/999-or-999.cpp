#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,min=999,max=-999;
    while(1){
        cin>>n;
        if((n==999)||(n==-999)){
            break;
        }
        if(min>n){
            min=n;
        }
        if(max<n){
            max=n;
        }
        
    }
    cout<<max<<' '<<min;
    return 0;
}