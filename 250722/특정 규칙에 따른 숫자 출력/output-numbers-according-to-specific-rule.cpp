#include <iostream>
using namespace std;
int main(){
    int n,cnt=1;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            if(cnt==10){
                cnt=1;
            }
            if(j>i){
                cout<<"  ";
            }
            else{
                cout<<cnt<<' ';
                cnt+=1;
            }
            
        }
        cout<<endl;
    }
}