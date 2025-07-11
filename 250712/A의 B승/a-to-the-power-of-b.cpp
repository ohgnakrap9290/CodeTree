#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,total=1;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        total*=a;
    }
    cout<<total;
    return 0;
}