#include<iostream>
using namespace std;

 int sumDigits(int n){
    int digSum = 0;
while (n>0){
    int lastDig = n%10;
    n = n/10;

    digSum += lastDig;
}
return digSum;
 }

int main() {

    cout<<"Sum = "<<sumDigits(2356)<<endl;
    return 0;
}