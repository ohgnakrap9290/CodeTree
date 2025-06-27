#include<iostream>
using namespace std;
int main(){
    int n,total=0;
    cin >>n;
    for(int i=1;i<100;i++){
        if(total>=n){
            cout <<i-1;
            break;
        }
        else{
            total +=i;
        }
    }
}