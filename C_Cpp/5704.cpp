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
            if(snt[i] != ' ') alpha[snt[i]-'A'] = 1;
        }

        bool exists = count(begin(alpha), end(alpha), 0) > 0;
        cout << (exists ? "N\n" : "Y\n");
    }
}