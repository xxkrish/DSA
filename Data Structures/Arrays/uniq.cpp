#include<iostream>
using namespace std;

void uniqueVal(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i!=j && arr[i] == arr[j]){
    
                break;
            }
            else if(j == (size-1)){
                cout<<arr[i]<<endl;
            }
        }
        
    }
}


int main() {
    int arr[] = {1,1,3,3,7,2,6,6};
    int size = 8;
    uniqueVal(arr, size);
    return 0;
}

/*
Function Purpose

void uniqueVal(int arr[], int size)
This function is designed to print the unique (non-repeating) values in an array.

It takes an array arr[] and its size as input.

It then loops through each element and checks whether that element occurs only once in the array.

🔁 Outer Loop: Iterate through every element

for(int i = 0; i < size; i++)
This loop picks each element arr[i] one by one.

For each i, we want to check if arr[i] is unique (i.e., no other arr[j] == arr[i], except when j == i).

🔁 Inner Loop: Compare with every other element

for(int j = 0; j < size; j++)
For the current arr[i], this loop compares it with all arr[j] from start to end.

⚖️ Check for duplicates

if(i != j && arr[i] == arr[j])
This checks if any other index j (i.e., i != j) has the same value as arr[i].

If a duplicate is found, we break the inner loop, since it's not unique.

✅ Check if element is unique

else if(j == (size - 1))
This else if condition is crucial:

It will only run if the for loop completed all iterations without hitting the break.

That means arr[i] was never found again, i.e., it's unique.

So we print it: cout << arr[i] << endl;
*/