// BOJ 26209 - BRONZ 5
//https://www.acmicpc.net/problem/26209
#include <iostream>
using namespace std;
int n[8];
int main(){
    for(int i = 0; i < 8; i++) cin >> n[i];
    for(int i = 0; i < 8; i++) if(n[i]==9){cout << "F"; return 0;}
    cout << "S";
    return 0;
}