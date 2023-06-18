//BOJ 5598 - BRONZ 2
//https://www.acmicpc.net/problem/5598
#include <iostream>
using namespace std;
int l;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;
    l = s.length();

    for(int i = 0; i < l; i++){
        if(s[i] > 'C') s[i] -= 3;
        else s[i] += 23;
    }
    cout << s;
}