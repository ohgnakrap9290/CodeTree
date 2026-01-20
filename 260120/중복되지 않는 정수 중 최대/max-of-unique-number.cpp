#include <iostream>
using namespace std;

int N;
int nums[1000];
int cnt[1001];
int idx;

int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>nums[i];
    }
    for(int i=0;i<N;i++){
        idx = nums[i];
        cnt[idx]+=1;
    }
    int max=-1;
    for(int i=0;i<=1001;i++){
        if(cnt[i]==1){
            if(i>max){
                max=i;
            }
        }
    }
    cout<<max;
}

