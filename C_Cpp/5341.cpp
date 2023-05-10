//BOJ 5341 - BRONZ 5
//https://www.acmicpc.net/problem/5341
#include <iostream>
using namespace std;
int n;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        cin >> n;
        if(n==0) break;
        cout << (n*(n+1))/2 << "\n";
    }
    return 0;
}