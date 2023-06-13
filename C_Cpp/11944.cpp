//BOJ 11944 - BRONZ 2
//https://www.acmicpc.net/problem/11944
#include <iostream>
#include <string>
using namespace std;
int M, l, n, h, t;
string N;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    l = N.length();
    n = stoi(N);
    h = M/l;
    t = M%l;

    if(l * n < M) for(int i = 0; i < n; i++) cout << N;
    else{
        for(int i = 0; i < h; i++) cout << N;
        for(int i = 0; i < t; i++) cout << N[i];
    }
}