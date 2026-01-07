#include<iostream>
using namespace std;
int main() {
    int n = 4;
    
    for(int i = 1; i <= n; i++){
        char ch = 'A'+ i-1;
        for(int j = 0; j < i; j++){
            cout<<char(ch-j)<<" ";
        }
        ch += 1;
        cout<<endl;
    }
    return 0;
}

//expected output

/*
A           i=1
B A         i=2
C B A       i=3
D C B A     i=4
*/