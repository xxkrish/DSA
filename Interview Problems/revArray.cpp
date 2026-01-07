#include<iostream>
using namespace std;
#include<vector>


void revArr(vector<int> & s){
 for(int i =0; i<s.size()/2; i++){
        int front = i, back = s.size()-i-1;
        int temp;
        temp = s[front];
        s[front] = s[back];
        s[back] = temp;
    }

}

int main() {

    vector<int> nums = {6,5,4,3,2,1};

    revArr(nums);

   for(int i=0; i<nums.size(); i++){
    cout<<nums[i];
   }

    return 0;
}

/*

1 2 3 4 5
f       b

5 2 3 4 1
  f   b

5 4 3 2 1
    fb
*/