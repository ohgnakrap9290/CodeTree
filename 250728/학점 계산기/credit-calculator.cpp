#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    double a,total=0;
    for(int i=0;i<n;i++){
        cin>>a;
        total+=a;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<total/n<<endl;
    if((total/n)>=4.0){
        cout<<"Perfect";
    }
    else if((total/n)>=3.0){
        cout<<"Good";
    }
    else{
        cout<<"Poor";
    }
    return 0;
}