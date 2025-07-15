#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    bool yes=false;
    cin>>n;
    for(int i=2;i<=n;i++){
        if((n%i==0)&&(n!=i)){
            yes=true;
        }
    }
    if(yes){
        cout<<'C';
    }
    else{
        cout<<'N';
    }

    return 0;
}