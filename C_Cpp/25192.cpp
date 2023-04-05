//BOJ 25192 - SILVER 4 
//https://www.acmicpc.net/problem/25192

//1st try - 데이터 저격 당함 + O(n^2)의 경우의 수

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int N,res=0; cin >> N;
    string s;
    set<string> is;
    while(N--){
        cin >> s;
        if(s == "ENTER"){
            res+=is.size();
            is.clear(); //bucket의 개수에 비례하여 시간이 걸리므로, 많이 담고 있다면 시간 초과가 날 수도 있다.
        }else is.insert(s);
    }
    cout << res+is.size();
    return 0;
}