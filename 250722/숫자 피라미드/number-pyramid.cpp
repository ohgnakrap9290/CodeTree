#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>i){
                cout<<"  ";
            }
            else{
                cout<<i<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}