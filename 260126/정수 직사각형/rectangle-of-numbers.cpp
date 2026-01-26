#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,M;
    cin>>N>>M;
    int num=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<num<<' ';
            num++;
        }
        cout<<endl; 
    }
    return 0;
}