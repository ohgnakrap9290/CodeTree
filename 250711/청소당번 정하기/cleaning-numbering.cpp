#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,c12=0,c3=0,c2=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%12==0){
            c12+=1;
        }
        else if(i%2==0&&i%3==0){
            c3+=1;
        }
        else if(i%3==0){
            c3+=1;
        }
        else if(i%2==0){
            c2+=1;
        }
    }
    cout<<c2<<' '<<c3<<' '<<c12;


    return 0;
}