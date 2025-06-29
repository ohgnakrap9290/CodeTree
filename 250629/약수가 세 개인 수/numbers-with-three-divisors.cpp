#include <iostream>

using namespace std;

int st, ed,result=0;

int main() {
    cin >> st >> ed;
    for(int i=st;i<=ed;i++){
        int cnt = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cnt +=1;
            }
        }
        if(cnt==3){
            result +=1;
        }
    }
    cout <<result;
    return 0;
}
