#include<iostream>
using namespace std;
int main() {
    int n = 4;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j < (n-i); j++){
            cout<<i+1;
        }
    cout<<endl;
    }

    return 0;
}

/*              sp      num
1111    i = 0   0       4    
 222    i = 1   1       3
  33    i = 2   2       2
   4    i = 3   3       1
*/