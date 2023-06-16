//BOJ 10820 - BRONZ 2
//https://www.acmicpc.net/problem/10820
#include <iostream>
using namespace std;
int l, w, u, n, p;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        w = u = n = p = 0;
        getline(cin, s);
        if(cin.eof()) break;

        l = s.length();
        for(int i = 0; i < l; i++){
            if(s[i] == ' ') p++;
            else if(s[i] >= 'a') w++;
            else if(s[i] >= 'A') u++;
            else n++;
        }
        cout << w << " " << u << " " << n << " " << p << "\n";
    }
}