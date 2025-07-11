#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,temp,total=0;
    cin>>a>>b;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=b;i>=a;i--){
        if(i%5==0){
            total +=i;
        }
    }
    cout<<total;
    return 0;
}