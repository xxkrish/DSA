#include<iostream>
using namespace std;
#include<vector>

void reverseVec(vector<int> &vec, int size){
    int start =0;
    int end = size-1;

    while(start<end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> vec = {1,2,3,4,5};
    int size = 5;

    reverseVec(vec, size);

    for(int val: vec){
        cout<<val<<endl;
    }
    return 0;
}