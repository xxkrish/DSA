#include<iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int maxAllowedPages){
    int student = 1,  pages = 0; 
    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if((arr[i] + pages) <= maxAllowedPages){
            pages+= arr[i];
        }else{
            student++;
            pages = arr[i]; 
        }
    }

    if(student > m){
        return false;
    }else{
        return true;
    }
}

int allocateBooks(vector<int> &arr, int n, int m){

    int sum=0;

    if(m>n){
        return -1;
    }

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int st = 0, end = sum, ans;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isValid(arr, n, m ,mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }

    return ans;

}



int main() {
    vector<int> arr = {12, 34, 67, 90};
    int n = 4, m = 2;
    
    cout<<allocateBooks(arr, n , m)<<endl;
    return 0;
}