#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,total=0,cnt=0;
    cin>>a>>b;
    for(int i=b;i>=a;i--){
        if(i%5==0||i%7==0){
            total+=i;
            cnt+=1;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<total<<' '<<(total)/(double(cnt));
    return 0;
}