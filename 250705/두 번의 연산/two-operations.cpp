#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >>a;
    if(a%2!=0){
        a=a+3;
    }
    if(a%3==0){
        a=a/3;
    }
    cout<<a;
    return 0;
}