#include<iostream>
using namespace std;
int main(){
    int a;
    cin >>a;
    int array[a];
    for(int i=0;i<a;i++){
        cin >>array[i];
    }
    for(int j=a-1;j>-1;j--){
        if(array[j]%2==0){
            cout <<array[j]<<' ';
        }
    }
}