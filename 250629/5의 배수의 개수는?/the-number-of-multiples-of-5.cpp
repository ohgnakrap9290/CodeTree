#include<iostream>
using namespace std;
int main(){
    int cnt=0,matrix[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >>matrix[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matrix[i][j]%5==0){
                cnt +=1;

            }
        }
    }
    cout <<cnt;
}