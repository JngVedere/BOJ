//BOJ 9012 - SILVER 4
//https://www.acmicpc.net/problem/9012
#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while(T--){
        bool uf = false;
        int top = 0,sl;
        string s; cin >> s; sl = s.length();

        for(int i = 0; i < sl;i++){
            if(s[i]=='(') top++; //stack push
            else if(s[i]==')') top--; //stack pop
            if(top<0) uf = true; //empty condition control
        }

        if(uf||top) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}