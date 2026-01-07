#include<iostream>
using namespace std;

void digitCount(int n){
    int count = 0;

    while(n!=0){
        int digit = n%10;
        count++;
        n/=10;
    }

    cout<<count<<endl;
}

int main() {

    int n = 5665;

    digitCount(n);
    return 0;
}