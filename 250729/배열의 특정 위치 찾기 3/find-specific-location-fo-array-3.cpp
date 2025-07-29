#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[100],n;
    for(int i=0;i<100;i++){
        cin>>array[i];
        if(array[i]==0){
            cout<<array[i-1]+array[i-2]+array[i-3];
            break;
        }
    }
    return 0;
}