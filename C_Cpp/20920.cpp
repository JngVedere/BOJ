//BOJ 20920 - SILVER 3 
//https://www.acmicpc.net/problem/20920
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

inline bool compare(const pair<string,int> & lhs, const pair<string,int> & rhs){
    //### Wrong Code
    // if(lhs.second!=rhs.second) return lhs.second > rhs.second;
    // else if(lhs.first.length()!=rhs.first.length()) return lhs.first.length() > rhs.first.length();
    // else return !lhs.first.compare(rhs.first);

    //Different Form
    if(lhs.second == rhs.second){
        if(lhs.first.length() == rhs.first.length()) return lhs.first < rhs.first;
        else return lhs.first.length() > rhs.first.length();
    }else return lhs.second > rhs.second;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    map<string,int> im;
    int N,M; cin >> N >> M;
    string s;
    while(N--){
        cin >> s;
        if(s.length()<M) continue;
        im[s]++;
    }

    vector<pair<string,int>> iv(im.begin(),im.end());
    sort(iv.begin(),iv.end(),compare);

    for(int i = 0; i < iv.size(); i++) cout << iv[i].first << "\n";
    return 0;
}