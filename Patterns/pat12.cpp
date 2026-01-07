#include<iostream>
using namespace std;
int main() {
    int n = 4;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j < (n-i); j++){
            cout<<ch;
        }
        ch+=1;
        cout<<endl;
    }
    return 0;
}

/*            spaces       char
AAAA    i=0     0           4
 BBB    i=1     1           3
  CC    i=2     2           2
   D    i=3     3           1
*/