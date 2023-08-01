//BOJ 7600 - BRONZ 2
//https://www.acmicpc.net/problem/7600
#include <iostream>
#include <cstring>
using namespace std;
int cnt, len, k, alpha_check[26];
string s, tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        cnt = 0;
        memset(alpha_check, 0, sizeof(int)*26);
        getline(cin, s);

        if(s == "#") break;

        len = s.length();
        for(int i = 0; i < len; i++){
            if(s[i] <= 'Z' && s[i] >= 'A') s[i] = tolower(s[i]);
            k = s[i] - 'a';
            if(k >= 0 && k <= 25) alpha_check[k] = 1;
        }

        for(int i = 0; i < 26; i++) if(alpha_check[i]) cnt++;
        cout << cnt << "\n";
    }
}