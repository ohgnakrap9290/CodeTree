#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    bool yesorno=false;
    cin>>a>>b>>c;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            yesorno=true;
        }
    
    }
    if(yesorno){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}