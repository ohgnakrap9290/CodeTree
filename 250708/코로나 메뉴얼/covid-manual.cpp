#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char w;
    int a=0,b;
    for(int i=0;i<3;i++){
        cin >>w>>b;
        if(w=='Y'&&b>=37){
            a=a+1;
        }
    }
    cout<<((a>=2)?'E':'N');
    
    
    return 0;
}