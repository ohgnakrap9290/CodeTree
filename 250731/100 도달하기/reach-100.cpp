#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[100];
    cin>>array[1];
    array[0]=1;
    for(int i=2;i<100;i++){
        if(array[i-2]>100){
            cout<< array[i-2];
            break;
        }
        array[i]=array[i-1]+array[i-2];
        cout<<array[i-2]<<' ';
    }
    
    return 0;
}