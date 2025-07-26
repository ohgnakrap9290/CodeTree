#include <iostream>

using namespace std;

int st, ed,cnt,answer=0;

int main() {
    cin >> st >> ed;

    // Please write your code here.
    for(int i=st;i<=ed;i++){
        cnt=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cnt+=1;
            }
        }
        if(cnt==3){
            answer+=1;
        }
    }
    cout<<answer;
    return 0;
}
