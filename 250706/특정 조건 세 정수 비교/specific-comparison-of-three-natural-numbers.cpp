#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    int min1=min({a,b,c});
    

    cout<<(a==min1)<<' '<<(a==b&&c==b);
    return 0;
}