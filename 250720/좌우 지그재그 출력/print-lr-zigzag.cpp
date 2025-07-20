#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnta=1,cntb;
    cin>>n;
    cntb=2*n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<cnta<<' ';
                cnta+=1;
            }
            cnta+=n;

        }
        else{
            for(int k=0;k<n;k++){
                cout<<cntb<<' ';
                cntb-=1;
            }
            cntb+=3*n;
        }
        cout<<endl;
    }
    return 0;
}