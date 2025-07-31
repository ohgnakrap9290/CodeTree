#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,array[10]={0,0,0,0,0,0,0,0,0,0};
    while(1){
        cin>>n;
        if(n==0){
            break;
        }
        array[n/10-1]+=1;
    }
    for(int i=100;i>=10;i-=10){
        cout<<i<<" - "<<array[i/10-1]<<endl;
    }
    return 0;
}