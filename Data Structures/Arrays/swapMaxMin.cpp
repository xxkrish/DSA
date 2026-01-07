#include<iostream>
using namespace std;


void MaxMinArr(int arr[], int size, int &small, int &large, int &sIn, int &lIn){

    for(int i=0; i<size; i++){
        small = min(arr[i], small);
        large = max(arr[i], large);

        if(arr[i] == small){
            sIn = i;
        }
        if(arr[i] == small){
            sIn = i;
        }if(arr[i] == large){
            lIn = i;
        }

    }

}

int main() {
    int arr[] = {10, 4, 7, 8, 100};
    int size = 5;
    int small = INT_MAX;
    int large = INT_MIN;

    int sIn, lIn;
    MaxMinArr(arr, size, small, large, sIn, lIn);
    cout<<"Small: "<<small<<endl;
    cout<<"large: "<<large<<endl;
    cout<<"Small Index: "<<sIn<<endl;
    cout<<"large Index: "<<lIn<<endl;

    swap(arr[sIn], arr[lIn]);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}