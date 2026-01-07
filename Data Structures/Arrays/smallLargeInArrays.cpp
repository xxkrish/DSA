#include<iostream>
using namespace std;


int main() {
    int n[5]= {10, 100, 20, 1, 8};

    int small = INT_MAX, large = INT_MIN, smallIndex, largeIndex, size = 5;


    for(int i=0; i<size; i++){
            small = min(n[i], small);
            large = max(n[i], large);

            if(n[i]==small){
                smallIndex = i;
            } 
            if(n[i]==large){
                largeIndex = i;
            }
    }

    cout<<"Smallest: "<<small<<endl;
    cout<<"Smallest Index: "<<smallIndex<<endl;
    cout<<"Largest: "<<large<<endl;
    cout<<"Largest Index: "<<largeIndex<<endl;
    
    return 0;
}