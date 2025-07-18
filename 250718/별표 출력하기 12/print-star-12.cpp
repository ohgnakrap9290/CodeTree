#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            if(i==0){
                cout<<"* ";
            }
            else if((k>=i)&&(k%2==1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}