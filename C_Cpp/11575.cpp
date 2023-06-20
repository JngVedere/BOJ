//BOJ 11575 - BRONZ 2
//https://www.acmicpc.net/problem/11575
#include <iostream>
using namespace std;
int T, a, b, l;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        cin >> a >> b;
        cin >> s;
        
        l = s.length();
        for(int i = 0; i < l; i++) s[i] = 'A' + (a * (s[i] - 'A') + b) % 26;

        cout << s << "\n";
    }
}