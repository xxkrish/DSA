#include<iostream>
using namespace std;
int main() {
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        if(i==1 || i==n){
        for(int j=0; j<2*i-1; j++){
            cout<<"*";
        }
        }
        else{
            cout<<"*";
            for(int j=0; j<)

        }
        cout<<endl;
    }
    
    return 0;
}

/*
   *    i=1         sp=3    st=1
  * *   i=2         sp=2    st=2    sp'=1
 *   *  i=3         sp=1    st=2    sp'=3
******* i=4         sp=0    st=7
*/