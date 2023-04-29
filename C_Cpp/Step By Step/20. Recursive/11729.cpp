//BOJ 11729 - SILVER 1
//https://www.acmicpc.net/problem/11729

#include <iostream>
#include <cmath>
using namespace std;
int N;

void hanoi(int n, int from = 1, int to = 3, int mid = 2){
    if(n==0) return;

    hanoi(n - 1, from, mid, to); //
    cout << from << " " << to << "\n";
    hanoi(n - 1, mid, to, from);
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    
    cout << (int)pow(2,N) - 1 << "\n";
    hanoi(N);

    return 0;
}