#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 0 || n ==1){
        cout<<"Enter a natural num!";
        return false;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    int n = 50;
    
    for(int i = 2; i<= n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}