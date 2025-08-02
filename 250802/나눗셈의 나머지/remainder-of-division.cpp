#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a,b,array[10]={0,0,0,0,0,0,0,0,0,0},total=0;
    cin>>a>>b;
    while(1){
        if(a<=1){
            break;
        }
        n=a%b;
        array[n]+=1;
        a=a/b;
        
    }
    for(int i=0;i<b;i++){
        total+=array[i]*array[i];
    }
    cout<<total;
    return 0;
}