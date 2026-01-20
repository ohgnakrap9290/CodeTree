#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int max;
    // Please write your code here.
    int idx=N;
    int anw;
    while(idx!=0){
        max=0;
        for(int i=0;i<idx;i++){
            if(a[i]>max){
                max=a[i];
                anw=i+1;
            }
        }
        idx = anw;
        cout<<anw<<' ';
        idx--;
    }


    return 0;
}
