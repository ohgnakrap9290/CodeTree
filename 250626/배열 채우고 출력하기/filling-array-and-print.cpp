#include<iostream>
using namespace std;
int main(){
    char array[10];
    for(int i=0;i<10;i++){
        cin >>array[i];
    }
    for(int j=9;j>-1;j--){
        cout << array[j];
    }
}