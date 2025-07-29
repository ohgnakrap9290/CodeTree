#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0,n,score,total;
    cin>>n;
    for(int i=0;i<n;i++){
        total=0;
        for(int j=0;j<4;j++){
            cin>>score;
            total+=score;
        }
        if((total/4)>=60){
            cout<<"pass"<<endl;
            cnt+=1;
        }
        else{
            cout<<"fail"<<endl;
        }
    }
    cout<<cnt;
    return 0;
}