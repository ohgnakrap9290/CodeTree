#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,a_array[100],b_array[100],idx;
    bool seq=true;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>a_array[i];
    }
    for(int i=0;i<b;i++){
        cin>>b_array[i];
    }
    for(int i=0;i<a;i++){
        if(a_array[i]==b_array[0]){
            idx = i;
            break; 
        }
    }
    for(int i=0;i<b;i++){
        if(a_array[i+idx]==b_array[i]){
            continue;
        }
        else{
            seq = false;
            cout <<"No";
            break;
        }
    }
    if(seq){
        cout<<"Yes";
    }
    return 0;
}