#include<iostream>
using namespace std;
int main(){
    int a,count=0;
    cin>>a;
    for(int i=1;i<a+1;i++){
        if(i%2==0||i%3==0||i%5==0){
            continue;
        }
        else{
            count +=1;
        }
    }
    cout << count;
}