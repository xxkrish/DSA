#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &vec, int size, int target){
    int index=0;
    for(int val: vec){
            if(val == target){
                return index;
            }
            index++;
    }
    return -1;
}

int main() {
    vector<int> vec = {1,2,3,4,5};
    int size = 5;
    int target = 4;

    cout<<linearSearch(vec, size, target)<<endl;
    return 0;
}