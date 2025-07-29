#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,array[10],total=0,cnt=0;
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    for(int i=1;i<10;i+=2){
        total+=array[i];
    }
    cout<<total<<' ';
    total=0;
    for(int i=2;i<10;i+=3){
        total+=array[i];
        cnt+=1;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<total/(double)cnt;
    return 0;
}