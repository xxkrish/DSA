#include<iostream>
using namespace std;


string removeWhiteSpaces(string& s){
    string ans;
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            ans =  ans + s[i];
        }
    }

    return ans;
}

int main() {

    string sentence = "K rish";

    cout<<removeWhiteSpaces(sentence)<<endl;

    return 0;

}