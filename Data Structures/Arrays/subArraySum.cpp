#include<iostream>
using namespace std;
int main() {
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int size = 7, maxSum = INT_MIN;
   
    for(int st=0; st<size; st++){
        int currSum=0;
        for(int end=st; end<size; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout<<"Max Subarray Sum: "<<maxSum<<endl;
    return 0;
}