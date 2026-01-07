#include<iostream>
using namespace std;

int binToDec(int n){
    int ans = 0, pow = 1;
    while(n>0){
    int rem = n%10;
    ans += (rem * pow);
    n=n/10;
    pow = pow*2;
    }
    return ans;
}


int main() {
    int n=1010;
    cout<<binToDec(n)<<endl;
    return 0;
} 