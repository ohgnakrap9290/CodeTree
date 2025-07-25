#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=65;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((char)cnt=='['){
                cnt=65;
            }
            if(i>j){
                cout<<"  ";
            }
            else{
                cout<<(char)cnt<<' ';
                cnt+=1;
            }
        }
        cout<<endl;
    }
    return 0;
}