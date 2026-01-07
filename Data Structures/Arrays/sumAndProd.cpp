#include<iostream>
using namespace std;

int sum(int arr[], int size){   
    int sum=0;
    for(int i=0; i< size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int prod(int arr[], int size){
    int prod=1;
    for(int i=0; i< size; i++){
        prod = prod * arr[i];
    }
    return prod;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7 , 8};
    int size = 8;
   cout<<"Sum: "<<sum(arr, size)<<endl;
   cout<<"Product: "<<prod(arr, size)<<endl;
    return 0;
}