//BOJ 1977 - BRONZ 2
//https://www.acmicpc.net/problem/1977
#include <iostream>
#include <cmath>
using namespace std;
int M,N;
int f, l, tmp = 0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> M >> N;
    l = sqrt(N);
    f = sqrt(M);
    for(int i = f; i <= l; i++){
        if(i*i>=M) tmp += i*i;
    }

    cout << (tmp == 0 ? -1 : tmp);
    if(tmp!=0) cout << "\n" << (f*f >= M ? f*f : (f+1)*(f+1));
    return 0;
}