#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,q,array[100],num,a,s,e;
    bool exit=false;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<q;i++){
        cin>>a;
        if(a==1){
            cin>>num;
            cout<<array[num-1];
        }
        if(a==2){
            cin>>num;
            for(int j=0;j<n;j++){
                if(array[j]==num){
                    cout<<j+1;
                    exit=true;
                    break;
                }
            }
            if(exit==false){
                cout<<0;
            }
        }
        if(a==3){
            cin>>s>>e;
            for(int k=s-1;k<e;k++){
                cout<<array[k]<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}