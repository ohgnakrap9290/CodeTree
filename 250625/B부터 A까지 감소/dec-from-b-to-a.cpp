#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;
    for(int i=b;(b+1)>a;b--){
        cout << b<< ' ';
    }
}