#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cin>>c;
            c-=32;
            cout<<c<<' ';
        }
        cout<<endl;
    }
    return 0;
}