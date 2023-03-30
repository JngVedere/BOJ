//BOJ 11478 - SILVER 3
//https://www.acmicpc.net/problem/11478

#include <iostream>
#include <unordered_set>
using namespace std;


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    unordered_set<string> sbs;
    cin >> s;
    for(int i = 1; i <= s.length();i++){
        for(int j = 0; j<=s.length()-i;j++) sbs.insert(s.substr(j,i));
    }
    cout << sbs.size();
    
    return 0;
}