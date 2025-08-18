#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[100],n,min=100,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(array[i]==min){
            cnt+=1;
        }
    }
    cout<<min<<' '<<cnt;
    return 0;
}