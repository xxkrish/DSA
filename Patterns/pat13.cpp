#include<iostream>
using namespace std;
int main() {
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-(i+1)); j++){
            cout<<" ";
        }
        for(int j = 1; j <= i+1; j++){
            cout<<j;
        }
        for(int j = i; j > 0; j--
        
        ){
            cout<<j;

        }
        cout<<endl;
    }
    return 0;
}

/*                  sp      pat1    pat2
   1        i=0      3      1         0
  121       i=1      2      2         1
 12321      i=2      1      3         2
1234321     i=3      0      4         3
*/