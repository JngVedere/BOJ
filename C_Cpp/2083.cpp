//BOJ 2083 - BRONZ 4
//https://www.acmicpc.net/problem/2083
#include <iostream>
#include <vector>
using namespace std;

string name,grade;
int age,weight;
vector<pair<string,string>> ans;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    while(true){
        cin >> name >> age >> weight;
        if(name == "#") break;

        grade = (age>17||weight>=80 ? "Senior" : "Junior");
        ans.push_back(make_pair(name,grade));
    }

    auto end = ans.end();
    for(auto iter = ans.begin(); iter!=end; iter++) cout << iter->first << " " << iter->second << "\n";

    return 0;
}