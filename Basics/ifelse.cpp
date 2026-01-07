#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your age: ";
    cin>>n;

    if(n >= 18){
        cout<<"You are eligible to cast a vote."<<endl;
    }else{
        cout<<"You are not eligible for a vote!"<<endl;
    }
return 0;
}