#include <iostream>
using namespace std;

int main() {
    int arr[10];
    // Please write your code here.
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int min=1001,max=-1;
    for(int i=1;i<10;i++){
        if(500-min<500-arr[i] && 500-arr[i]<0){
            min=arr[i];
        }
        if(500-max>500-arr[i] && 500-arr[i]>0){
            max=arr[i];
        }
    }
    cout<< max<<' '<<min;
    return 0;
}