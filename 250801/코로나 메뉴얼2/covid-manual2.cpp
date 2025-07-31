#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    int b,array[4]={0,0,0,0};
    for(int i=0;i<3;i++){
        cin>>a>>b;
        if((a=='Y')&&(b>=37)){
            array[0]+=1;
        }
        else if((a=='N')&&(b>=37)){
            array[1]+=1;
        }
        else if((a=='Y')&&(b<37)){
            array[2]+=1;
        }
        else{
            array[3]+=1;
        }
    }
    for(int i=0;i<4;i++){
        cout<<array[i]<<' ';
    }
    if(array[0]>=2){
        cout<<'E';
    }
    return 0;
}