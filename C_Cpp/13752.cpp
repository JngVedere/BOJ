//BOJ 13752 - BRONZ 2
//https://www.acmicpc.net/problem/13752
#include <iostream>
using namespace std;
int N, k;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    while(N--){
        cin >> k;
        for(int i = 0; i < k; i++) cout << '=';
        cout << '\n';
    }
}