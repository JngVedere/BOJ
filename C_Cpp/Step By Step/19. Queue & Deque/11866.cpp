//BOJ 11866 - SILVER 5
//https://www.acmicpc.net/problem/11866

//단계별로 풀어보기에는 Queue로 돼있지만.. 아무리 생각해도 queue로는 못 풀겠음

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int N, K; cin >> N >> K;
    vector<int> iv, res;

    for(int i = 1; i<=N; i++) iv.push_back(i);
    cout << "<";

    int idx = 0;
    while(!iv.empty()){
        idx = (idx+K-1)%iv.size();
        res.push_back(iv[idx]);
        iv.erase(iv.begin()+idx);
    }

    for(int i = 0; i<N-1;i++) cout << res[i] << ", ";
    cout << res[N-1] << ">";
    
    return 0;
}