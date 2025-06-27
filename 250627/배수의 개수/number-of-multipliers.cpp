#include<iostream>
using namespace std;
int main(){
    int array[10], cnt3=0,cnt5=0;
    for(int i=0;i<10;i++){
        cin >> array[i];
    }
    for(int j=0;j<10;j++){
        if(array[j]%3==0){
            cnt3 +=1;
        }
        if(array[j]%5==0){
            cnt5 +=1;
        }

    }
    cout <<cnt3 <<' '<< cnt5;
}   