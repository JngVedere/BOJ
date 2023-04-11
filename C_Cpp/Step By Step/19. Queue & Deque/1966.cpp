//BOJ 1966 - SILVER 3
//https://www.acmicpc.net/problem/1966

#include <iostream>
#include <queue>
using namespace std;

int N,M,res;
queue<pair<int,int>> q;
priority_queue<int> pq;

void init(){
    res = 0;
    queue<pair<int,int>>().swap(q);
    priority_queue<int>().swap(pq);
}

int printer(){
    while (!q.empty())
    {
        int idx = q.front().first, val = q.front().second;
        q.pop();
        if (pq.top() == val){
            pq.pop();
            ++res;
            if (idx == M) return res;
        }else q.push({idx,val});
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int T,p;
    cin >> T;
    while(T--){
        init();
        cin >> N >> M;
        for(int i = 0; i <N; i++){
            cin >> p;
            q.push({i, p});
            pq.push(p);
        }
        cout << printer() << "\n";
    }

    return 0;
}