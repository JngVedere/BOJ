//BOJ 11170 - BRONZ 1
//https://www.acmicpc.net/problem/11170
#include <iostream>
using namespace std;
int T, N, M, C, l;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
    
    while(T--){
        C = 0;
        cin >> N >> M;
        for(int i = N; i<=M; i++){
            s = to_string(i);
            l = s.length();
            for(int j = 0; j < l; j++) if(s[j]=='0') C++;
        }
        cout << C << "\n";
    }
}