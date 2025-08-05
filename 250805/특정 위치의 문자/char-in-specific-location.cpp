#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char n,array[6]={'L','E','B','R','O','S'};
    int cnt=-1;
    cin>>n;

    for(int i=0;i<6;i++){
        if(array[i]==n){
            cnt=i;
            break;
        }
    }
    if(cnt==-1){
        cout<<"None";
    }
    else{
        cout<<cnt;
    }
    
    return 0;
}