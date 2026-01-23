#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sub=100;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]-arr[j] >0 && arr[i]-arr[j] <sub){
                sub = arr[i]-arr[j];
            }
        }
    }
    cout<< sub;
    return 0;
}