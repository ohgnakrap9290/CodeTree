#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    for(;;){
        cin>>n;
        if(n<25){
            cout<<"Higher"<<endl;
        }
        else if(n>25){
            cout<<"Lower"<<endl;
        }
        else{
            cout<<"Good"<<endl;
            break;
        }
    }
    return 0;
}