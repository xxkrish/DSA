#include<iostream>
using namespace std;

bool prime(int n){
    if(n<1){
         cout<<"Error! Enter a natural number \n";
         return false;
    }
    if(n==1){
        cout<<"1 is neither prime not composite number \n";
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            return false;
        }   
    }
       return true;
}

int main() {
    int n = 1;
    if(prime(n)){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}