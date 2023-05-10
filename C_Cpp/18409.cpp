//BOJ 18409 - BRONZ 5
//https://www.acmicpc.net/problem/18409
#include <iostream>
using namespace std;
int n,l,x=0;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'e' || s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') x++;
    }
    cout << x;
    return 0;
}