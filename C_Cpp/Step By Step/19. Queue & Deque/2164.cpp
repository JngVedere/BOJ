//BOJ 2164 - SILVER 4
//https://www.acmicpc.net/problem/2164

#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int N,s; cin >> N;
    queue<int> q;
    for(int i = 1; i <= N; i++) q.push(i);
    s = q.size();
    while(s!=1){
        q.pop();
        int x = q.front();
        q.pop();
        q.push(x);
        s = q.size();
    }
    cout << q.front();
    return 0;
}
