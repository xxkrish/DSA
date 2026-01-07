#include<iostream>
using namespace std;

int sum(int a, int b){
    int s = a+b;
    return s;
}



int min(int a, int b){
    if(a>b) {
        return b;
    }
    else {
        return a;
    }
}

int main() {
    cout<<sum(3, 5)<<endl;

    cout<<min(100,1000)<<endl;

    return 0;
}