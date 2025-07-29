#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[10];
    for(int i=0;i<10;i++){
        cin>>array[i];
        if(array[i]%3==0){
            cout<<array[i-1];
            break;
        }
    }
    return 0;
}