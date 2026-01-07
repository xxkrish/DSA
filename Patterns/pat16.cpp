#include<iostream>
using namespace std;
int main() {
    int n = 4;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*
****    i=0     sp=0
 ****   i=1     sp=1
  ****  i=2     sp=2
   **** i=3     sp=3
*/