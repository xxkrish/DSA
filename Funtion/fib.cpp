#include<iostream>
using namespace std;

int fib(int n){
    int a=0, b=1, s=0;

    for(int i=0; i<n-1; i++){
        s = a+b;
        a = b;
        b = s;
        }
    return s;
}

int main() { 
    int n = 18;
    cout<<"The ith value is: "<<fib(n);

    return 0;
}