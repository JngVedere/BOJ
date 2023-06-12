//BOJ 2822 - SILVER 5
//https://www.acmicpc.net/problem/2822
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> v;
int R = 8, sc, tmp = 0, i = 0, arr[5];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(R--){
        cin >> sc;
        v.push_back(make_pair(sc, 8-R));
    }

    sort(v.begin(), v.end(),[](const auto& l, const auto& r){
        return l.first > r.first;
    });

    for(auto iter = v.begin(); iter != v.begin()+5; iter++){
        tmp += iter->first;
        arr[i++] = iter->second;
    }
    
    sort(arr, arr+5);

    cout << tmp << "\n";
    for(i = 0; i < 5; i++) cout << arr[i] << " ";
}