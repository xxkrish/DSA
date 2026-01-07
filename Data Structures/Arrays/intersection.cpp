#include<iostream>
using namespace std;

void inter(int arr1[], int arr2[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
                if(arr1[i] == arr2[j]){
                    cout<<arr1[i]<<endl;
                }
            
        }
    }
}

int main() {
    int arr1[] = {1,2,3,4,5,6,7,8};
    int arr2[] = {4,5,6,7,8};
    int size = sizeof(arr1)/sizeof(int);

    inter(arr1, arr2, size);
    return 0;
}