#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N=4;
    int num;
    int sum=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>num;
            sum+=num;
        }
        cout<<sum<<endl;
        sum=0;
    }
    
    return 0;
}