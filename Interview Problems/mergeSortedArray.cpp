#include<iostream>
using namespace std;
#include<vector>
int main() {

    vector<int> A = {4,5,6,0,0,0};
    vector<int> B = {1, 2, 3};

    int m = 3, n = 3;
    int size = A.size();

    int idx = size-1;
    int i = m-1;
    int j = n-1;


    while((i>=0)&& (j>=0)){
         if(A[i]>B[j]){
            A[idx] = A[i];
            idx--;
            i--;
         }else{
            A[idx] = B[j];
            idx--;
            j--;
         }
    }

    while(j>=0){
        A[idx] = B[j];
        idx--;
        j--;
    }

    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }



    return 0;
}

/*
A = [1,2,3,4,5,6]
   i idx     

   i<0
B = [1, 2, 3]
     j   


6 > 3 ? A[idx] = 6
idx--; i--


*/