#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >>a>>b>>c;
    if((b>a)&&(c<a)||(c>a)&&(b<a)){
        cout << a;
    }
    else if((b>a)&&(c>b)||(a<b)&&(c>b)){
        cout <<b;
    }
    else{
        cout <<c;
    }

}