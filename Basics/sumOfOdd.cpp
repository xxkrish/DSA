#include<iostream>
using namespace std;

int main(){
    int n,sum = 0, oddSum = 0 , evenSum = 0;

    cout<<"Enter the number: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }  
    cout<<"Sum of Odd numbers: "<<sum<<endl;

    int j = 1;
    while(j<=n){
        if(j % 2 != 0){
            oddSum += j;
        }
        j++;
    }
    
    cout<< "Odd Sum: "<<oddSum<<endl;

    for(int k = 1; k <= n; k++){
        if(k % 2 == 0){
            evenSum += k;
        }

    }
    cout<<"Sum of Even numbers: "<<evenSum<<endl;

    return 0;
}