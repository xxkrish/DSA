#include<iostream>
using namespace std;
#include<vector>

bool isValid(string &s){

    int count = 0;

    for(int i=0; i<s.size(); i++){
        if(count<0){
            return false;
        }
        if(s[i] == '('){
            count++;
        }else if(s[i] == ')'){
            count--;
        }
    }

    if(count == 0){
        return true;
    }

return false;
}

int main() {

    vector<string> s = {
    "()()()",
    ")()()",
    "((()))",
    ")()()("
    };

    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" "<<isValid(s[i])<<endl;
    }
    return 0;
}