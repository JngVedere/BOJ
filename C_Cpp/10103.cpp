//BOJ 10103 - BRONZ 3
//https://www.acmicpc.net/problem/10103
#include <iostream>
using namespace std;
int n,c,s,C = 100, S = 100;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        cin >> c >> s;
        if(c>s) S-=c;
        else if(s>c) C-=s;
    }
    cout << C << "\n" << S;
}