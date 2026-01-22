#include<iostream>
using namespace std;

int gcd(int a, int b){

    while(a > 0 && b > 0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }

    if(a == 0) return b;
    return a;
}

int lcm(int a, int b){
    int Dgcd = gcd(a, b);

    return a*b/Dgcd;
}

int main() {
    int a=20, b =28;

    cout<<gcd(a,b)<<endl;

    cout<<lcm(a,b)<<endl;
    return 0;
}