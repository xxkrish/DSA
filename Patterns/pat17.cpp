#include<iostream>

using namespace std;
int main() {
    ;
    int n=4;
        for(int i=0; i<n; i++){

            for(int j=0; j<n-i-1; j++){
             ;   cout<<" ";
            }
            for(int j=0; j<n+2; j++){                
              ;  cout<<"*";
            }
            cout<<endl;
        }
    return 0;
}


/*
   ***** i=0       sp=3
  ***** i=1         sp=2
 ***** i=2          sp=1
***** i=3           sp=0
*/