//BOJ 1904 - SILVER 3
//https://www.acmicpc.net/problem/1904
#include <iostream>
using namespace std; 
int fibo[1000007] = {0,};
int input;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> input;

    fibo[1] = 1; fibo[2] = 2;
    for(int i = 3; i <= input; i++){
        fibo[i] = (fibo[i-1] + fibo[i-2])%15746;
    }
    
    cout << fibo[input];
    return 0;
}