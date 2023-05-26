//BOJ 10986 - GOLD 3
//https://www.acmicpc.net/problem/10986
#include <iostream>
#include <vector>
using namespace std;
int N, M;
long long tmp, sum = 0, ans = 0;
vector<long long> v;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    v.assign(M, 0);

    for(int i = 0; i < N; i++){
        cin >> tmp;
        sum += tmp;
        v[sum % M]++;
    }

    ans = v[0];

    for(int i = 0; i < M; i++){
        if(v[i] < 2) continue;
        ans += v[i] * (v[i]-1) / 2;
    }

    cout << ans;
    return 0;
}