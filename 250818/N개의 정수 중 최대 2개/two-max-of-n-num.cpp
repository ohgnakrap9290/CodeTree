#include <iostream>

using namespace std;

int n,maxidx;
int array[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int max=array[0],max2=array[1];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
            maxidx=i;
        }
    }for(int i=0;i<n;i++){
        if((array[i]>max2)&&(i!=maxidx)){
            max2=array[i];
            
        }
    }
    cout<<max<<' '<<max2;


    // Please write your code here.

    return 0;
}
