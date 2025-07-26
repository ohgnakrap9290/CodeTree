#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,st,ed,total=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>st>>ed;
        total=0;
        for(int j=st;j<=ed;j++){
            if(j%2==0){
                total+=j;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}