#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int array[n];
    
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    for(int J=0;J<n;J++){
        cout << array[J]*array[J]<<' ';
    }
}