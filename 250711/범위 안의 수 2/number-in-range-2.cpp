#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,total=0,cnt=0;
    for(int i=0;i<10;i++){
        cin>>n;
        if((n>=0)&&(n<=200)){
            total+=n;
            cnt+=1;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<total<<' '<<(total)/double(cnt);
    return 0;
}