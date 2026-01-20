#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int max1 = A[0];
    int max2;
    for(int i=1;i<N;i++){
        if(A[i]>max1){
            max2=max1;
            max1=A[i];
        }
        if(A[i]<max1&&A[i]>max2){
            max2=A[i];
        }
    }
    cout<<max1<<' '<<max2;
    // Please write your code here.

    return 0;
}
