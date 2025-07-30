#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,array[6]={0,0,0,0,0,0};
    for(int i=0;i<10;i++){
        cin>>a;
        array[a-1]+=1;
    }
    for(int i=1;i<=6;i++){
        cout<<i<<" - "<<array[i-1]<<endl;
    }
    return 0;
}