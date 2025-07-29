#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char array1[10];
    int array[3]={1,4,7};
    for(int i=0;i<10;i++){
        cin>>array1[i];
    }
    for(int i=0;i<3;i++){
        int a=array[i];
        cout<<array1[a]<<' ';
    }
    return 0;
}