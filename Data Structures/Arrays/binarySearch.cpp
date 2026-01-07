#include<iostream>
using namespace std;
#include<vector>

int BinarySearch(vector<int> arr, int target){
        int st = 0, end = arr.size()-1, mid;

        while(st <= end){
            mid = st + (end-st)/2;

            if(target < arr[mid]){
                end = mid-1;
            }else if(target > arr[mid]){
                st = mid+1;
            }
            else{
                return mid;
            }
        }

    return -1;
}



int main() {
    vector<int> arr1 = {-1, 3, 5, 7 ,9, 15, 21};
    int target = 21;
   // vector<int> arr2 = {-1, 3, 7 ,9, 15, 21};

   cout<<BinarySearch(arr1, target)<<endl;

    return 0;
}