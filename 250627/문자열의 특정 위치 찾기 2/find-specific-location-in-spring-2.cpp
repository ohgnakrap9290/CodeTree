#include<iostream>
using namespace std;
int main(){
    int cnt=0;
    string array[5]={"apple","banana","grape","blueberry","orange"};
    char a;
    cin >>a;
    for(int i=0;i<5;i++){
        if(array[i][2]==a||array[i][3]==a){
            cout << array[i]<<'\n';
            cnt +=1;
        }
    }
    cout << cnt;
}