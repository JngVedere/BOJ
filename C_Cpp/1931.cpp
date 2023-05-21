//BOJ 1931 - SILVER 3
//https://www.acmicpc.net/problem/1931
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,s,e,tmp,ans = 1;
vector<pair<int,int>> Meeting;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for(int _ = 0; _ < N; _++){
        cin >> s >> e;
        Meeting.push_back(make_pair(s,e));
    }

    sort(Meeting.begin(), Meeting.end(),[](auto &left, auto &right){
        return left.second != right.second ? left.second < right.second : left.first < right.first;
    });

    tmp = Meeting[0].second;
    for(int i = 1; i < N; i++){
        if(Meeting[i].first >= tmp){
            ans++; tmp = Meeting[i].second;
        }
    }

    cout << ans;
    return 0;
}