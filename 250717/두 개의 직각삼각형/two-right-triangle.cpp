#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<'*';
        }
        
        for(int k=0;k<i;k++){
            cout<<"  ";
        }


        for(int h=0;h<n-i;h++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}