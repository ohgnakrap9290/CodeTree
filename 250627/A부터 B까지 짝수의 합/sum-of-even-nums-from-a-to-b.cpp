#include<iostream>
using namespace std;
int main(){
    int a,b,total=0;
    cin >>a>>b;
    for(int i=b;i>a-1;i--){
        if(i%2==0){
            total +=i;
        }
    }
    cout << total;
}