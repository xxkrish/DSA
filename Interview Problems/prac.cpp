#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int returnMembership(vector<string>& days){
       int count=0;

       unordered_map<string, int> dayOrder ={
        {"Mon", 1},
        {"Tue", 2},
        {"Wed", 3},
        {"Thu", 4},
        {"Fri", 5},
        {"Sat", 6},
        {"Sun", 7}
       };

       if(days.size()<=0){
        return 0;
       }

       for(int i=0; i<days.size(); i++){
        if((dayOrder.find(days[i]) != dayOrder.end()) && (dayOrder[days[i]] >= 1  && dayOrder[days[i]] <= 7)){
            count++;
        }


       }
        
       return count;
}


int main() {

    vector<string> days = {"Tue", "Wed", "Mon", "Mon"};

    cout<<returnMembership(days)<<endl;


    return 0;
}

/*

week starts with: 
Mon, Tue, Wed, Thu, Fri, Sat, Sun

Test case 1: 
["Tue", "Tue", "Tue", "Tue"]
output: 4

Test case 2:
["Mon","Tue","Fri","Mon"]
Output: 2

Test case 3:
["Sun","Sat","Fri","Thu","Wed","Tue","Mon"]
Output: 7


*/