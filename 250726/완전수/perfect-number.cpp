#include <iostream>

using namespace std;

int start, end,cnt=0,total=0;

int main() {
    int start, end,cnt=0,total=0;
    cin >> start >> end;

    // Please write your code here.
    for(int i=start;i<=end;i++){
        for(int j=1;j<i;j++){
            if(i%j==0){
                total+=i;
            }
            if(total==i){
            cnt+=1;
            }
        }
        

    }
    cout<<cnt;

    return 0;
}
