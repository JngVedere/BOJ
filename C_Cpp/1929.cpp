//BOJ 1929 - SILVER 3
//https://www.acmicpc.net/problem/1929
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;
    cin >> m >> n;  
    bitset<1000001> era;

    era[1] = true;
    for(int i = 2; i<=sqrt(n); i++){
        if(era[i]) continue;
        for(int j = i*i; j <=n; j+=i) era[j] = true;
    }

    for(int i = m; i<= n; i++){
        if(!era[i]) cout << i << "\n";
    }
    return 0;
}