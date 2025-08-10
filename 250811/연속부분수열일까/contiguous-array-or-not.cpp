#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,a_array[100],b_array[100],idx=-1;
    bool seq = false;
    cin>>a>>b;
    if(b>a){
        cout<<"No";
        return 0;
    }
    for(int i=0;i<a;i++){
        cin>>a_array[i];
    }
    for(int i=0;i<b;i++){
        cin>>b_array[i];
    }
    for(int i=0;i<a;i++){
        if(a_array[i]==b_array[0]){
            seq = false;
            for(int j=0;j<b;j++){
                if(a_array[j+i]==b_array[j]){
                    seq = true;
                }
                else{
                    seq = false;
                    break;
                }
            }
            if(seq){
                break;
            }
        }
    }
    if(seq){
        cout<<"Yes";
    }
    else{
        cout <<"No";
    }
    return 0;
}