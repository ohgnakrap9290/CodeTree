#include<iostream>
using namespace std;
int main(){
    int n,original[100][100],result[100][100];
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            original[i][j]=(j+1);
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                result[j][i]=original[i][j];
            }

        }
        else{
            for(int j=0;j<n;j++){
                result[j][i]=original[i][n-j-1];
            }
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << result[i][j];
        }
        cout <<'\n';
    }
    
    
}