//BOJ 13458 - BRONZ 2
//https://www.acmicpc.net/problem/13458
#include <iostream>
using namespace std;
int N,B,C;
long long S;
int A[1000007];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    cin >> B >> C;

    for(int i = 0; i < N; i++){
        A[i]-=B; S++;
        if(A[i]<0) continue;
        S+= (A[i] % C ? A[i] / C + 1 : A[i] / C);
    }

    cout << S;

    return 0;
}