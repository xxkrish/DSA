#include<iostream>
#include<vector> 
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int minAlloc){
    int painter = 1, time = 0;

    for(int i=0; i<n; i++){
    if(time + arr[i] <= minAlloc){
        time += arr[i];
    }else{
        painter++;
        time = arr[i];
    }
    }

    return painter<=m;
}

int timeToPaint(vector<int> &arr, int n, int m){

    int maxVal = INT_MIN, sum = 0, ans;

    for(int i=0; i<n; i++){
        maxVal = max(arr[i], maxVal);
        sum+= arr[i];
    }

    int st = maxVal, end = sum;

    while(st<=end){
        int mid = st+(end-st)/2;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }

    return ans;

}

int main() {

    vector<int> arr = {40, 30, 10, 20};
    int n=arr.size(), m = 2;

    cout<<timeToPaint(arr, n, m)<<endl;
    return 0;
}