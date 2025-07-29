#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[10],cnt=0;
    for(int i=0;i<10;i++){
        
        cin>>array[i];
        if(array[i]==0){
            break;

        }
        cnt+=1;
        
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<array[i]<<' ';
    }
    return 0;
}