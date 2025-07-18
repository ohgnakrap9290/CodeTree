#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    int n=2*a+1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i%2==1)&&(j%2==1)){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}