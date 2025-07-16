#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for(int k=0;k<2;k++){
        int a;
        cin>>a;
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                cout<<'*';
            }
            cout<<endl;
        }
        cout<<endl;
    }
}