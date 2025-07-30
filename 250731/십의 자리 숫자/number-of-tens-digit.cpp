#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,array[9]={0,0,0,0,0,0,0,0,0};

    while(1){
        cin>>n;
        if(n==0){
            break;
        }
        array[n/10-1]+=1;
    }
    for(int i=1;i<=9;i++){
        cout<<i<<" - "<<array[i-1]<<endl;
    }
    return 0;
}