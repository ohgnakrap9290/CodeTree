#include<iostream>
using namespace std;
int main(){
    int matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< 3*matrix[i][j]<<' ';
        }
        cout<<'\n';
    }
}