#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int totala=0,totalb=0,n;
    for(int i=0;i<10;i++){
        cin>>n;
        if(i%2==0){
            totala+=n;
        }
        else{
            totalb+=n;
        }
    }
    cout<<(((totala-totalb)>0)?totala-totalb:totalb-totala);
    return 0;
}