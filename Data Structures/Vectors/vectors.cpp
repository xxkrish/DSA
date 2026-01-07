#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec = {'a', 'b', 'c', 'd', 'e'};

    cout<<"Size: "<<vec.size()<<endl;
    for(char val: vec){
        cout<<val<<endl;
    }

    vec.push_back('f');
    vec.push_back('h');
    vec.push_back('i');
    cout<<"after push back Size: "<<vec.size()<<endl;

    vec.pop_back();
    cout<<"after push back Size: "<<vec.size()<<endl;
    for(char val: vec){
        cout<<val<<endl;
    }

    cout<<"Front value: "<<vec.front()<<endl; 
    cout<<"back value: "<<vec.back()<<endl; 

    cout<<vec.at(4)<<endl;
    return 0;
}