#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,total=0;
    cin>>n;
        for(int i=1;i<=100;i++){
            total+=i;
            if(total>=n){
                cout<<i;
                break;
            }
        }

    
    
    return 0;
}