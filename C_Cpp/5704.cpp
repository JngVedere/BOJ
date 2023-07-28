//BOJ 5704 - BRONZ 2
//https://www.acmicpc.net/problem/5704
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int lng, alpha[26];
string snt;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        getline(cin, snt);
        if(snt == "*") break;

        memset(alpha, 0, sizeof(int)*26);
        lng = snt.length();

        for(int i = 0; i < lng; i++){
            if(snt[i] == ' ') continue;
            alpha[snt[i]-'a'] = 1;
        }

        bool flag = true;
        for(int i = 0; i < 26; i++){
            if(alpha[i] == 0) flag = false;
        }

        cout << (flag ? "Y\n" : "N\n");
    }
}