#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a=5,b=6,c=7,temp;
    temp=a;
    a=c;
    c=b;
    b=temp;
    cout<<a<<endl<<b<<endl<<c;

    return 0;
}