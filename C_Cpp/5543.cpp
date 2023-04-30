//BOJ 5543 - BRONZ 4
//https://www.acmicpc.net/problem/5543
#include <iostream>
#include <set>
using namespace std;
int n,res=0;
set<int> ham, ver;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 3; i++){
        cin >> n;
        ham.insert(n);
    }

    for(int i = 0; i < 2; i++){
        cin >> n;
        ver.insert(n);
    }

    auto iter1 = ham.begin();
    auto iter2 = ver.begin();

    res = *iter1 + *iter2 - 50;
    cout << res;
    return 0;
}