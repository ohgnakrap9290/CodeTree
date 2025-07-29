#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,array[10],total=0;
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    total=array[2]+array[4]+array[9];
    cout<<total;
    return 0;
}