#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,total=0;
    cin>>a>>b;
    for(int i=b;i>=a;i--){
        if(i%2==0){
            total+=i;
        }
    }
    cout<<total;
    return 0;
}