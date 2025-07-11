#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int total=1,a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        total*=i;
    }
    cout<<total;
    return 0;
}