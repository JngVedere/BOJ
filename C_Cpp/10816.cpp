//BOJ 10816 - SILVER 2
//https://www.acmicpc.net/problem/10816

//이진 탐색(이진 분석)이 정석적인 방법이지만,, 얘도 되긴 함 

#include <iostream>
using namespace std;


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, w;
    int p[20000001] = {0,};

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> w;
        p[w+10000000] = p[w+10000000]+1;
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> w;
        cout << p[w+10000000] << " ";
    }
    return 0;
}