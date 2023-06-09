//BOJ 2711 - BRONZ 2
//https://www.acmicpc.net/problem/2711
#include <iostream>
using namespace std;
int T, n;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while(T--){
        cin >> n >> s;
        for(int i = 0; i < s.length(); i++)
            if(n!=i+1) 
                cout << s[i];
        cout << "\n";
    }
}