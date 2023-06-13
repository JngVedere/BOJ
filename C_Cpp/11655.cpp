//BOJ 11655 - BRONZ 1
//https://www.acmicpc.net/problem/11655
#include <iostream>
using namespace std;
int l;
string N, C = "NOPQRSTUVWXYZABCDEFGHIJKLM", c = "nopqrstuvwxyzabcdefghijklm";

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    getline(cin ,N);
    l = N.length();

    for(int i = 0; i < l; i++){
        if(N[i] == ' ') cout << " ";
        else if(N[i] >= 'a') cout << c[N[i]-'a'];
        else if(N[i] >= 'A') cout << C[N[i]-'A'];
        else cout << N[i];
    }
}