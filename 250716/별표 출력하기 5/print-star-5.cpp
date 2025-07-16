#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int h=0;h<i;h++){
            for(int j=0;j<i;j++){
                cout<<'*';
            }
            cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}