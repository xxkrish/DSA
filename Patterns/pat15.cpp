#include<iostream>
using namespace std;
int main() {
    int n = 4;

// 1st approach # Time complexity: O(n)
    for(int i=0; i<n; i++){       
        if(i==0 || i == n-1){
            for(int j=0; j<n;j++){
            cout<<"*";
        }
        cout<<endl;
        }

        else{
            cout<<"*";
        for(int j=0; j<n-2; j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
        }
    }
    
   /*
   time complexity: O(n^2)
   int i,j;
   for(i=0; i<n; i++){
    for(j=0; j<n; j++){
    if(i==0 || i==n-1 || j==0 || j==n-1){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
    }
    cout<<endl;
   }
*/
    return 0;
}

/*
****    i=0
*  *    i=1     sp=2
*  *    i=2     sp=2
****    i=3
*/