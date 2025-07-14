#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int total=0,cnt=0,n;
    while(1){
        cin>>n;
        if(!(n>=20&&n<30)){
            cout<<fixed;
            cout.precision(2);
            cout<<total/(double)cnt;
            break;
        }
        total+=n;
        cnt+=1;
    }
    return 0;
}