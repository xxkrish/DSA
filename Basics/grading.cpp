#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter your total marks: ";
    cin>>a;

    if(a >= 90){
        cout<<"Grade: A\n";
    }else if(a >= 80){
        cout<<"Grade: B\n";
    } else if (a >= 70){
        cout<<"Grade: C\n";
    }else{
        cout<<"Grade: D\n";
    }
 
    return 0;
}