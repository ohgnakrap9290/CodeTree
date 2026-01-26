#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    double rkfhavg=0,allavg=0;
    double colSum[4] = {0, 0, 0, 0};
    int num;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>num;
            allavg+=num;
            rkfhavg+=num;
            colSum[j]+=num;
        }
        cout<<fixed<<setprecision(1)<<(rkfhavg/4)<<' ';
        rkfhavg=0;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<fixed<<setprecision(1)<<(colSum[i]/2)<<' ';
    }
    cout<<endl<<fixed<<setprecision(1)<<(allavg/8);
    return 0;
}