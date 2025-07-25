#include <iostream>
using namespace std;

int main() {
    int cnt=1;
    // Please write your code here.4
    while(cnt<=19){
        for(int i=1;i<=19;i++){
            if((i%2==1)&&(i!=19)){
                cout<<cnt<<" * "<<i<<" = "<<i*cnt<<" / ";
            }
            else{
                cout<<cnt<<" * "<<i<<" = "<<i*cnt<<endl;
            }
        }
        cnt+=1;
    }
    return 0;
}