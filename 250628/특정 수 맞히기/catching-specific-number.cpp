#include<iostream>
using namespace std;
int main(){
    int num;
    cin >>num;
    while(num!=25){
        if(num<25){
            cout<<"Higher"<<'\n';
            cin >> num;
        }
        else{
            cout<<"Lower"<<'\n';
            cin >>num;
        }

    }
    cout <<"Good";
}