#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;
    int array[10]={a,b};
    for(int i=2;i<10;i++){
    array[i] =array[i-2] +array[i-1];
    }
    for(int j=0;j<10;j++){
        cout << array[j]%10<<' ';
    }
}