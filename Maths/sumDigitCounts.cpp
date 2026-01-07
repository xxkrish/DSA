#include<iostream>
using namespace std;
#include<cmath>


void sumDigits(int n){
    int sum;
    while(n!=0){
        int lastDigit = n%10;
        sum+=lastDigit;
        n = n/10;
        
    }
    cout<<sum<<endl;
}

int main() {
    int n = 3553;

    // cout<<(int)(log10(n)+1)<<endl;
   

    sumDigits(n);
    
    return 0;
}