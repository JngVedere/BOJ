//BOJ 1251  - SILVER 5
//https://www.acmicpc.net/problem/1251
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int,int>> v;
int l;
string s,tmp;


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    l = s.length();
    for(int i = 0; i < l; i++) v.push_back(make_pair((int)s[i],i));
    sort(v.begin(), v.end(),[](const auto& l, const auto& r){
        return (l.first != r.first ? l.first < r.first : l.second < r.second);
    });
}