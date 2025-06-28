#include<iostream>
using namespace std;
int main(){
    int a,b,n,total;
    cin >>n;
    for(int i=0;i<n;i++){
        total = 0;
        cin >>a>>b;
        for(int j=a;j<=b;j++){  
            if(j%2==0){
                total +=j;
            }
        }
        cout <<total<<'\n';
    }
}