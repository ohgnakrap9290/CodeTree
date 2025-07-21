// #include <iostream>
// using namespace std;

// int main() {
//     // Please write your code here.
//     int a,b;
//     cin>>a>>b;
//     for(int i=b;i>=a;i-=2){
//         for(int j=1;j<10;j++){
//             if(i==a){
//                 cout<<i<<" * "<<j<<" = "<<i*j;
//             }
//             else{
//                 cout<<i<<" * "<<j<<" = "<<i*j<<" / ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=9;i++){
        for(int j=b;j>=a;j-=2){
            if(j==a){
                cout<<j<<" * "<<i<<" = "<<i*j<<" / ";
            }
            else{
                cout<<j<<" * "<<i<<" = "<<i*j;
            }
        }
    }
}