//BOJ 10864 - BRONZ 2
//https://www.acmicpc.net/problem/10864
#include <iostream>
using namespace std;
int N, M, f[1001], s1, s2;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    while(M--){
        cin >> s1 >> s2;
        f[s1]++; f[s2]++;
    }

    for(int i = 1; i <= N; i++){
        cout << f[i] << "\n";
    }
}