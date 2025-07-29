#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double total=0,n;
    for(int i=0;i<8;i++){
        cin>>n;
        total+=n;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<total/8;
    
    return 0;
}