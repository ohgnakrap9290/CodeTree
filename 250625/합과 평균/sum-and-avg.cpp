#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a>>b;
    int total = a+b;
    cout <<fixed;
    cout.precision(1);
    double avg = double(a+b)/2;
    cout << total <<' '<<avg;
}