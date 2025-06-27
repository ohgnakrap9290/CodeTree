#include<iostream>
using namespace std;
int main(){
    int a;
    cin >>a;
    for(int i=a;i<101;i++){
        if(a>=90){
            cout <<'A'<<' ';
            a+=1;
        }
        else if(a>=80){
            cout<<'B'<<' ';
            a+=1;
        }
        else if(a>=70){
            cout<<'C'<<' ';
            a+=1;
        }
        else if(a>=60){
            cout <<'D'<<' ';
            a+=1;
        }
        else{
            cout<<'F'<<' ';
            a+=1;
        }
    }
}