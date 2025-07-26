#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a,b,total=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            total*=j;
        }
        cout<<total<<endl;
        total=1;
    }

    return 0;
}