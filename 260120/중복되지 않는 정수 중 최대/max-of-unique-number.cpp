#include <iostream>
using namespace std;

int N;
int nums[1000];

int main(){
    cin>>N;
    int cnt=0;
    for(int i=0;i<N;i++){
        cin>>nums[i];
    }
    int max=nums[0];
    for(int i=1;i<N;i++){
        if(max<nums[i]){
            max=nums[i];
        }
    }
    for(int i=0;i<N;i++){
        if(nums[i]==max){
            cnt++;
        }
    }
    if(cnt==1){
        cout<<max;
    }
    else{
        cout<<-1;
    }
}

