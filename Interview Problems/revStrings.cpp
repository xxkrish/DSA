#include<iostream>
using namespace std;

string reverseStr(string &s){
    
    for(int i=0; i<s.length()/2; i++){
        int front = i;
        int back = s.length()-i-1;

        char frontChar = s[front];
        char backChar = s[back];

        s[front] = backChar;
        s[back] = frontChar;
    }

    return s;
}

int main() {

    string s = "Hello";

   reverseStr(s);

   cout<<s;

    return 0;
}