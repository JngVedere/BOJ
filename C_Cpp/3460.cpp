//BOJ 3460 - BRONZ 3
//https://www.acmicpc.net/problem/3460
#include <iostream>
#include <bitset>
using namespace std;
int T, n;
string b;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        cin >> n;
        b = bitset<32>(n).to_string();
        for(int i = 0; i<32; i++) if(b[31-i]=='1') cout << i << " ";
        cout << "\n";
    }
}