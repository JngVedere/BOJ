//BOJ 24723 - BRONZE 4 
//https://www.acmicpc.net/problem/24723

#include <iostream>
using namespace std;

int bio(int n,int k){
    if(k==0 || k == n) return 1;
    return bio(n-1,k) + bio(n-1,k-1);
}

int main(){
    int n,k; cin >> n >> k;
    cout << bio(n,k);
    return 0;
}