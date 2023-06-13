//BOJ 11721 - BRONZ 3
//https://www.acmicpc.net/problem/11721
#include <iostream>
using namespace std;
int l;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s;
    l = s.length();

    cout << s[0];
    for(int i = 1; i < l; i++){
        if(i%10==0) cout << "\n";
        cout << s[i];
    }
}