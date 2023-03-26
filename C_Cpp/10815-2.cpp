//BOJ 10815 - SILVER 5
//https://www.acmicpc.net/problem/10815

//정석적인 문제 풀이법은 이진 탐색(이분 정렬)을 이용하여 푸는 것이지만, 그냥 겁나 큰 배열을 만들어서(..?) 풀어도 된다.
#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a,b;
    int N[20000001] = {0,};

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        N[a+10000000] = 1;
    }

    cin >> m;
    for(int i = 0; i <m; i++){
        cin >> b;
        if(N[b+10000000]==1) cout << 1 << " ";
        else cout << 0 << " ";
    }
    return 0;
}