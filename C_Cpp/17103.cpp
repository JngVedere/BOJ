//BOJ 17103 - SILVER 2
//https://www.acmicpc.net/problem/17103

//1st try with sqrt(N) looping -> Time Out
//2nd try idea ->
//  1. Sieve of Eratosthenes under 500,000 and saves it in an array.
//  2. using iterator, check is in it eratosthenes. for example for index i : eratoes. (i in eratos) && (n-i in eratos) -> true : sum++

#include <iostream>
#include <cmath>
#define MAX_NUM 1000001
using namespace std;


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    bool p[MAX_NUM] {1,1};
    for(int i = 2; i<sqrt(MAX_NUM);i++){
        if(p[i]) continue;
        for(int j = i*i; j<MAX_NUM;j+=i) p[j]=true; 
    }

    cin >> T;
    while(T--){
        int s=0;
        cin >> N;
        for(int i = 0; i<=N/2;i++){
            if(!p[i]&&!p[N-i]) s++;
        }
        cout << s << "\n";
    }
    return 0;
}