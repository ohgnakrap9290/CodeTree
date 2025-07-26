#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m,cnt=0;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>n;
        while(n!=1){
            if(n%2==0){
                n/=2;
                cnt+=1;
            }
            else{
                n=n*3+1;
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    
    }
}
    