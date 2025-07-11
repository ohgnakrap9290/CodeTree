#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,total=1;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        if(i%a==0){
            total*=i;
        }
    }
    cout<<total;
    return 0;
}