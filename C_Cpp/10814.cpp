//BOJ 10813 - BRONZ 2
//https://www.acmicpc.net/problem/10813
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int,string> a, const pair<int,string> b){
    return a.first < b.first;
}

int main(){
    int N,f;
    string s;
    scanf("%d",&N);
    vector<pair<int,string>> arr;
    for(int i = 0; i<N;i++){
        cin >> f >> s;
        arr.push_back(pair<int,string>(f,s));
    }

    stable_sort(arr.begin(),arr.end(),cmp);

    for(int i = 0; i < N; i++){
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
    return 0;
}