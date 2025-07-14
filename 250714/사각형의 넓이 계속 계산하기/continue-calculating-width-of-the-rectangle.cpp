#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int rkfh,tpfh;
    char c;
    for(;;){
        cin>>rkfh>>tpfh>>c;
        cout<<rkfh*tpfh<<endl;
        if(c=='C'){
            break;
        }
    }
    

    return 0;
}