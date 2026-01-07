#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copy = n;
    int sum=0;
    while(n!=0){
        int digit = n%10;
        sum += digit*digit*digit;
       n/=10;

       
    }

    return copy == sum;
    
}


int main() {

    int n = 153;

    if(isArmstrong(n)){
        cout<<"is an Armstrong No."<<endl;
    }else{
        cout<<"is NOT an Armstrong No."<<endl;
    }

    return 0;
}