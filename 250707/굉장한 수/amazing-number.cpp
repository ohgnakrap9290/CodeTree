#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;
    cout<<(((n%3==0&&n%2==1)||(n%5==0&&n%2==0))?"true":"false");
    return 0;
}