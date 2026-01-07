#include<iostream>
using namespace std;
#include<vector>
int main() {

    vector<int> vec;

    cout<<"Intially Size:"<<vec.size()<<endl;
    cout<<"Intially Vector:"<<vec.capacity()<<endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

   

    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Vector:"<<vec.capacity()<<endl;
     cout<<vec.at(3)<<endl;
    return 0;
}