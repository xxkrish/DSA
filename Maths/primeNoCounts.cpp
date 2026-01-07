#include<iostream>
using namespace std;
#include<vector>

int countPrime(int n){
    n = 50;
    vector<bool> prime(n+1, true);
    int count=0;

    for(int i=2; i<n; i++){
        if(prime[i]){
            count++;
            for(int j= i*2; j<n; j = i+j){
                prime[j] = false;
            }
        }
    }

    return count;

}

int main() {
    int n = 50;

    cout<<countPrime(n)<<endl;

    return 0;
}