#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a=1;
    cin>>n;
    while((n/a)>1){
        n=n/a;
        a+=1;
        
    }
    cout<<a;
    return 0;
}