#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a,total=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        total+=a;
        cnt+=1;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<total<<' '<<total/double(cnt);
    return 0;
}