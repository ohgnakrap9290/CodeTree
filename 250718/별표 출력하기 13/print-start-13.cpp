// #include <iostream>
// using namespace std;

// int main() {
//     // Please write your code here.
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int a=(i>n)? (2*n+1-i):i;
//         if()
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n,stack=1;
    cin>>n;
    int dstack=n;
    for(int i=1;i<=2*n;i++){
        if(i%2==0){
            for(int j=0;j<stack;j++){
                cout<<"* ";
                
            }
            stack+=1;
        }
        else{
            for(int k=0;k<dstack;k++){
                cout<<"* ";
                
            }
            dstack-=1;
        }
        cout<<endl;
    }
}