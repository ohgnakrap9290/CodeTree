#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h,w,b;
    cin>>h>>w;
    b=(10000*w)/(h*h);
    cout<<b;
    if(b>=25){
        cout<<endl<<"Obesity";
    }
    return 0;
}