#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    bool thtn=false;
    cin>>n;
    for(int i=2;i<=n;i++){
        thtn=false;
        for(int j=2;j<i;j++){   
            if(i%j==0){
                thtn=true;
            }
        }
        if(!(thtn)){
            cout<<i<<' ';
        }
    }
    return 0;
}