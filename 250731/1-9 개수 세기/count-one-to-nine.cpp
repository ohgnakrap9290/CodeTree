#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a,array[10]={0,0,0,0,0,0,0,0,0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        array[a-1]+=1;

    }
    for(int i=0;i<9;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}